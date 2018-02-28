#include <iostream>
#include <string>
#include <algorithm>
using std::cout;
using std::cin;
using std::string;
using std::endl;
string transformString(string);
int main()
{
	string inScore = "";
	string outCamel = "";
	cout << "Enter underscore string: ";
	getline(cin, inScore);
	outCamel = transformString(inScore);
	cout << endl << "New string in camel case: " << outCamel  <<  endl;
return 0;
}
string transformString(string scoreString)
{
	string tempString = "";
	string camelString = "";
	int charCount = 0;
	camelString = scoreString;	

	charCount = static_cast<int>(camelString.length());

	for (int v = 0; v < charCount; v += 1)
	{
		if (camelString.substr(v, 1) == "_")
		{
			tempString = camelString.substr(v + 1, 1);
			transform(tempString.begin(), tempString.end(), tempString.begin(), toupper);
			camelString.erase(v, 2);
			camelString.insert(v, tempString);
		}
	}
	
	return camelString;
}
