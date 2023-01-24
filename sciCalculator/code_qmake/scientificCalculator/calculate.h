#ifndef CALCULATE_H
#define CALCULATE_H


#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <cmath>


using namespace std;

/*****************
 * toolFunctions *
 *****************/

//Define the highest priority.
#define MAX_PRIORITY 5

//Rank opts and select nums.
int priority(string opt);

//change numbers' string into double.
long double digitize(string num);

//Operations for string
string s_add(string num1, string num2);

string s_sub(string num1, string num2);

string s_mul(string num1, string num2);

string s_div(string num1, string num2);

string s_pow(string num1, string num2);

string s_sqrt(string num);

string s_ln(string num);

string s_sin(string num);

string s_cos(string num);

string s_tan(string num);

string s_asin(string num);

string s_acos(string num);

string s_atan(string num);

string s_per(string num);


/**********************
 * calculateFunctions *
 **********************/

string form_text(string in, string ans);

vector<string> cut_text(string in);

vector<string> sort_text(vector<string> in);

string calcuate_answer(vector<string> in);

string form_answer(string in, int conf);

//Integrate all calculateFunctions
string calculate(string in, string ans, int conf);

#endif // CALCULATE_H
