#include <iostream>
#include <vector>
#include "lexicalanalysis.hpp"
#include <string>
#include "input.hpp"
using namespace std;

vector<string> input::accept()
{
	cout << "Enter the input string. \n";
	string input;
	cout << "\n";
	getline(cin,input);
	cout << "\n";
	vector<string>output = splitterobject.splitter(input);
	output.erase(output.begin());
	for(int i = 0;i < output.size();i++)
	{	
		if(output[i] == "")
		{
			output.erase(output.begin() + i);
			i-=1;
		}
	}
	return(output);
}

