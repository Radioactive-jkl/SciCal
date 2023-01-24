#include "calculator.h"

int main()
{
	//default Ans is "0". 
	string in, Ans = "0";
	//put your text here to test.
	in.append("6% / 3.2 * sin( 5*pi + 2.4% ^ (-1) ) =");
	//set form of output.
	int conf = 5;
	
	//cout originall formula.
	cout << "\n" << in << endl;

	//form
	in = form_text(in, Ans);
	cout << "\n" << in << endl;

	//cut
	vector<string> out = cut_text(in);
	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i] << " ";
	}
	cout << endl;

	//sort
	out = sort_text(out);
	for (int i = 0; i < out.size(); i++)
	{
		cout << out[i] << " ";
	}
	cout << endl;

	//calcuate
	in = calcuate_answer(out);
	cout << in << endl;
	cout << endl;

	//form
	in = form_answer(in, conf);
	cout << in << endl;

	//cout << calculate(in, "0", 5) << endl;
	return 0;
}