#include <calculate.h>


/*****************
 * toolFunctions *
 *****************/

int priority(string opt)
{
    if (opt == "(" ||
        opt == "j" || opt == "x" || opt == "y" || opt == "z" ||
        opt == "k" || opt == "u" || opt == "v" || opt == "w")
        return MAX_PRIORITY;
    else if (opt == "^" || opt == "%") return 3;
    else if (opt == "*" || opt == "/") return 2;
    else if (opt == "+" || opt == "-") return 1;
    else                               return 0;//num
}


long double digitize(string num)
{
    long double d_num = 0;
    if (num.find('%') != num.npos)
    {
        num.pop_back();
        d_num = (atof(num.c_str()) / 100.0);
    }//deal with percentage like "11.4%"
    else d_num = atof(num.c_str());
    return d_num;
}


string s_add(string num1, string num2)
{
    return to_string(digitize(num1) + digitize(num2));
}

string s_sub(string num1, string num2)
{
    return to_string(digitize(num1) - digitize(num2));
}

string s_mul(string num1, string num2)
{
    return to_string(digitize(num1) * digitize(num2));
}

string s_div(string num1, string num2)
{
    return to_string(digitize(num1) / digitize(num2));
}


string s_pow(string num1, string num2)
{
    return to_string(pow(digitize(num1), digitize(num2)));
}


string s_sin(string num)
{
    return to_string(sin(digitize(num)));
}

string s_cos(string num)
{
    return to_string(cos(digitize(num)));
}

string s_tan(string num)
{
    return to_string(tan(digitize(num)));
}

string s_asin(string num)
{
    return to_string(asin(digitize(num)));
}

string s_acos(string num)
{
    return to_string(acos(digitize(num)));
}

string s_atan(string num)
{
    return to_string(atan(digitize(num)));
}

string s_sqrt(string num)
{
    return to_string(sqrt(digitize(num)));
}

string s_ln(string num)
{
    return to_string(log(digitize(num)));
}

string s_per(string num)
{
    return to_string(digitize(num) / 100.0);
}


/**********************
 * calculateFunctions *
 **********************/

string form_text(string in, string ans)
{
    // check all valid strings------------Under construction
    /***************************
     * ( ) s q r t i n c o a l *
     * ^					   *
     * + - * /				   *
     * A . e p %			   *
     * 0 1 2 3 4 5 6 7 8 9	   *
     ***************************/
    //string check_1 = "+-*/()sqrtincoal^0123456789A.ep%";
    //for (int i = 0; i < in.length(); i++)
    //{
    //	if (check_1.find(in[i]) == -1)return "@";
    //}

    // fill "0"
    if(in[0]=='-')in.insert(0, "0");
    for (int i = 1; i < in.length(); i++)
    {
        if (in[i] == '-' && in[i - 1] == '(')
        {
            in.insert(i, "0");
        }
    }

    // encode to other unoccupied code
    /*********************************
     * "sqrt(" "sin(" "cos(" "tan("  *
     * "ln(" "asin(" "acos(" "atan(" *
     * "Ans" "e" "pi"				 *
     *								 *
     * j x y z k u v w               *
     *********************************/
    vector<string> s_code = {"sqrt(","sin(","cos(","tan(","ln(","asin(","acos(","atan(", "e", "pi"};
    vector<string> e_code = {"j","x","y","z","k","u","v","w", "2.71828183", "3.14159265"};
    for (int j = 0; j < s_code.size(); j++)
    {
        for (int i = in.find(s_code[j]); i <= in.length(); i = in.find(s_code[j]))
        {
            in.erase(i, s_code[j].length());
            in.insert(i, e_code[j]);
        }
    }

    // assign "Ans"
    for (int i = in.find("Ans"); i <= in.length(); i = in.find("Ans"))
    {
        in.erase(i, 3);
        in.insert(i, ans);
    }

    // check new string------------Under construction
    /***********************
     * ( ) j x y z k u v w *
     * ^				   *
     * + - * /			   *
     * . %		           *
     * 0 1 2 3 4 5 6 7 8 9 *
     ***********************/
    //string check_2 = "+-()jxyzkuvw^0123456789.%";
    //for (int i = 0; i < in.length(); i++)
    //{
    //	if (check_2.find(in[i]) == -1)return "@";
    //}

    // check legal text------------Under construction
    //vector<string> check_3 = {"++", "--", "**", "//", "^^", "..", "%%"};
    //for (int j = 0; j < check_3.size(); j++)
    //{
    //	if (in.find(check_3[j]))return "@";
    //}

    return in;
}

vector<string> cut_text(string in)
{
    vector<string> out;
    string temp;
    for (int i = 0; i < in.length(); i++)
    {
        if ((in[i] >= '0' && in[i] <= '9') || in[i] == '.' || in[i] == '%')
        {
            temp += in[i];
        }
        else
        {
            if (!temp.empty())
            {
                temp += '\0';
                out.push_back(temp);
                temp.clear();
            }

            temp = in[i] + '\0';
            out.push_back(temp);
            temp.clear();
        }
    }
    if (!temp.empty())
    {
        temp += "\0";
        out.push_back(temp);
        temp.clear();
    }
    return out;
}

vector<string> sort_text(vector<string> in)
{
    vector<string> out;
    stack <string> opt;
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] != ")" && priority(in[i]) == 0)out.push_back(in[i]);
        else if (in[i] == ")")
        {
            while (priority(opt.top()) != MAX_PRIORITY)
            {
                out.push_back(opt.top());
                opt.pop();
            }
            out.push_back(opt.top());
            opt.pop();
        }
        else if (priority(in[i]) == MAX_PRIORITY)opt.push(in[i]);
        else if ((!opt.empty()) && ((priority(opt.top()) == MAX_PRIORITY) || (priority(in[i]) > priority(opt.top()))))opt.push(in[i]);
        else
        {
            while (!opt.empty())
            {
                if (priority(opt.top()) == MAX_PRIORITY)break;
                else if (priority(in[i]) <= priority(opt.top()))
                {
                    out.push_back(opt.top());
                    opt.pop();
                }
            }
            opt.push(in[i]);
        }
    }
    while (!opt.empty())
    {
        out.push_back(opt.top());
        opt.pop();
    }
    return out;
}

string calcuate_answer(vector<string> in)
{
    stack <string> out;
    for (int i = 0; i < in.size(); i++)
    {
        if (priority(in[i]) == 0)out.push(in[i]);
        else if(!out.empty())
        {
            if (priority(in[i]) == MAX_PRIORITY)
            {
                string num = out.top();
                out.pop();
                /* "(" equals to no-operation.
                if (in[i] == "(");          */
                if		(in[i] == "j")out.push(s_sqrt(num));
                else if (in[i] == "x")out.push(s_sin (num));
                else if (in[i] == "y")out.push(s_cos (num));
                else if (in[i] == "z")out.push(s_tan (num));
                else if (in[i] == "k")out.push(s_ln  (num));
                else if (in[i] == "u")out.push(s_asin(num));
                else if (in[i] == "v")out.push(s_acos(num));
                else if (in[i] == "w")out.push(s_atan(num));
                else out.push(num);
            }
            else
            {
                string num2 = out.top();
                out.pop();
                if (!out.empty())
                {
                    string num1 = out.top();
                    out.pop();
                         if (in[i] == "+")out.push(s_add(num1, num2));
                    else if (in[i] == "-")out.push(s_sub(num1, num2));
                    else if (in[i] == "*")out.push(s_mul(num1, num2));
                    else if (in[i] == "/")out.push(s_div(num1, num2));
                    else if (in[i] == "^")out.push(s_pow(num1, num2));
                }
                else if (in[i] == "%")out.push(s_per(num2));
                else out.push(num2);
            }
        }
    }
    return out.top();
}


string form_answer(string in, int conf)
{
    int len = 0;
    if (conf >= 100)in = s_mul(in, "100");
    while (in.length() - in.find(".") - conf % 10 - 2)
    {
        in.pop_back();
    }
    if(conf/10%10)in.pop_back();
    else
    {
        if (in[in.length() - 1] > '5')
        {
            len = in.length() - in.find(".") - 1;
            in = to_string(long(digitize(in) * pow(10, len)) + 1).insert(in.length() - len - 1, ".");
        }
        in.pop_back();
    }
    if(in[in.length() - 1]=='.')in.pop_back();
    if (conf >= 100)in.append("%");
    return in;
}

string calculate(string in, string ans, int conf)
{
    string out;
    out = form_text(in, ans);
    if ( out== "@")return "Error!";
    else
    {
        ans = form_answer(calcuate_answer(sort_text(cut_text(out))), conf);
        return ans;
    }
}
