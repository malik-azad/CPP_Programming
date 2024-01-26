#include<iostream>

using namespace  std;

int main()
{
 char myString[] = "Hello world";
 char myStringMan[] = "HelLo world hi";
 int i;

 for(i=0; myString[i]!='\0'; i++)
 {
 	myStringMan[i]= myString [i]+2;
 }
myStringMan[i]='\0';
  cout<<myString<<endl;
  
     cout<<myStringMan<<endl;
  
     return 0;
  
}
