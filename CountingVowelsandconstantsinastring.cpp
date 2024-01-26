#include <iostream>
#include <string.h>
#include <istream>
using namespace std;
int main()
{
	char string[100];
	cout << "enter string: ";
	//cin>>string;
     cin.getline(string);

	int vow = 0, cons = 0;
	for (int i= 0; i < strlen(string); i++)
	{
		if (isalpha(string[i]))
		{
			if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] =='u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' )
				vow++;
			else
				cons++;
		}
	}
	cout << "count the vowels: " << vow << endl;
	cout << "count the constants:"<< cons << endl;
	return 0;

}
