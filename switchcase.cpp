#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int day;
	do{
	cout<<"enter the day of the week\n";
	cin>>day;
	
	switch(day)
	{
		case 1:
			cout<<"Monday\n";
			break;
		case 2:
			cout<<"Tuesday\n";
			break;
		case 3:
			cout<<"Wednesday\n";
			break;
		case 4:
			cout<<"Thursday\n";
			break;
		case 5:
			cout<<"Friday\n";
			break;
		case 6:
			cout<<"Saturday\n";
			break;
		case 7:
			cout<<"Sunday\n";
			break;
		default:
			cout<<"Not a valid day\n";
			exit(0);		
	}
	
	}while(true);
	
	return 0;
}
