#include <iostream>
#include <stdlib.h>
#include <cctype>
using namespace std;

int main()
{
	int num1;			
	int num2;
	int num3;

	cout << "Enter Three Numbers ";
	cin >> num1 >> num2 >> num3;

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << num1 << " Is Greatest of Three \n";
		}
		else
		{
			cout << num3 << " Is Greatest of Three \n";
		}
	}
	else if (num2 > num3)
	{
		cout << num2 << " Is Greatest of Three \n";
	}
	else
	{
		cout << num3 << " Is Greatest of Three \n";
	}

	return 0;
}