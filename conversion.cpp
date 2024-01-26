#include<stdio.h>
int main()
{
	float bytes, mb,gb;
	printf("Enter the no of bytes");
	scanf("%f",&bytes);
	mb= bytes*1024;
	gb=bytes*1024*1024;
	printf("Value in mb and gb is : %f %f", mb,gb);
	return 0;
	
}
