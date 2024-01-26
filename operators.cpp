#include<iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 5;
	
	
	x = x - y * x / y % y;
	cout<< x << endl;
	x = x > y < x > y;
	
	cout<< x << endl;

	x = y ++ ;
	
	cout<< x << endl;
	
	
	int marks  = 100;
	
	char result; 
	
	result  =  marks < 32 ? 'F' : 'P';
	
	cout<< result << endl;
	

int b[2] = {[0]=89,[1]=77};

	cout<<b[1]<<endl;
	cout<< sizeof(&result) <<endl;

}
