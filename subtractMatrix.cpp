#include <iostream>

using namespace std;

int main()
{
	int mat1[2][3]; 
	int mat2[2][3];  
	int result[2][3];

	
	cout<<" \n Enter values for 1st matrix ";
	for (int i=0; i<2; i++)
	{
		 for(int j=0;j<3;j++)
		  {
		  	 cin>>mat1[i][j];
		  }
		 
    }
    	cout<<" \n Enter values for 2nd matrix ";
    for (int i=0; i<2; i++)
	{
		  for(int j=0;j<3;j++)
		  {
		  	 cin>>mat2[i][j];
		  }
		 
    }
   	for (int i=0; i<2; i++)
	{
		  for( int j=0;j<3;j++)
		  {
		  	result[i][j]= mat1[i][j] - mat2[i][j];
		  	cout<<"   " <<result[i][j];
		  }
		  cout<<endl;
	}
    return 0;
	
	
}
