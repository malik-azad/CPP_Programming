#include <iostream>
#include <string> 
using namespace std;

string NumberToWord(long n)
{
	switch (n)
	{
		case 0:
			return "Zero";
		case 1:
			return "One";
		case 2:
			return "Two";
		case 3:
			return "Three";
		case 4:
			return "Four";
		case 5:
			return "Five";
		case 6:
			return "Six";
		case 7:
			return "Seven";
		case 8:
			return "Eight";
		case 9:
			return "Nine";
		case 10:
			return "Ten";
		case 11:
			return "Eleven";
		case 12:
			return "Tweleve";
		case 13:
			return "Thirteen";
		case 14:
			return "Fourteen";
		case 15:
			return "Fifteen";
		case 16:
			return "Sixteen";
		case 17:
			return "Seventeen";
		case 18:
			return "Eighteen";
		case 19:
			return "Nineteen";
		case 20:
			return "Twenty";
		case 30:
			return "Thirty";
		case 40:
			return "Forty";
		case 50:
			return "Fifty";
		case 60:
			return "Sixty";
		case 70:
			return "Seventy";
		case 80:
			return "Eighty";
		case 90:
			return "Ninety";

		default:
			return "";
	}
}
string TwoDigitsNumberToWord(long n)
{
	int a, b;
	string WordA, WordB;

	if (n <= 20)
	{
		return NumberToWord(n);
	}

	b = n % 10;
	a = n - b;

	WordA = NumberToWord(a);
	WordB = NumberToWord(b);

	if (b == 0)
	{
		return WordA;
	}

	return WordA + " " + WordB;
}
string ThreeDigitsNumberToWord(long n)
{
	int q, r;
	string WordQ, WordR;

	if (n <= 99)
	{
		return TwoDigitsNumberToWord(n);
	}

	r = n % 100;
	q = n / 100;

	WordQ = NumberToWord(q);
	WordR = TwoDigitsNumberToWord(r);

	if (r == 0)
	{
		return WordQ + " Hundred ";
	}

	return WordQ + " Hundred " + WordR;
}
int main()
{
	int n;
	cout<<"Enter the Number:\n ";
	cin>>n;
	string answer;
	answer = ThreeDigitsNumberToWord(n);
	cout << n << " => " << answer << endl;
}
