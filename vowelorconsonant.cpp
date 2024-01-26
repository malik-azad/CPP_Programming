#include<iostream>
#include<stdlib.h>
#include<cctype>
using namespace std;

int main()
{
	char letter;
	
	cout<<"enter any Alphabet\n";
	cin>>letter;
	char letter_new = tolower(letter);
	switch(letter_new)
	{
		case 'a':
			cout<<"Vowel\n";
			break;
		case 'e':
			cout<<"Vowel\n";
			break;
		case 'i':
			cout<<"Vowel\n";
			break;
		case 'o':
			cout<<"Vowel\n";
			break;
		case 'u':
			cout<<"Vowel\n";
			break;
		
		default:
			cout<<"consonant\n";
					
	}
	
	
	return 0;
}
