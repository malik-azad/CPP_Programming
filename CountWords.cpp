#include<iostream>
#include<string.h>

using namespace  std;

int main()
{
    char myString[100];
 
    int i, count = 1;
	cout<<"Enter the string: ";
	gets(myString);
	
	//cout<<myString;
	
    for (i=0; myString[i]!= '\0'; i++)
    {
    	if (myString[i]== ' ')
    	count++;
        while( myString[i]== ' ')
        {
        	i++;
		}
        
	}
     
    cout<<"\nThe number of words in the string is: "<<count;
		return 0;
}
