#include<stdio.h>
#include<string.h>
int main()
{
	int v=0 ,consonants= 0 ,i;
	char c[50];
	printf("Type the characters");
	scanf("%c",&c);
	for(i=0;c[i]>0;i++){
		if(c[i]=='a' || c[i]=='e'|| c[i]=='i'|| c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'){
		v++};
		}
	
		
	
	else {consonants++};
	printf("Number of vowels and consonants  are : %d %d",v,c);
	return 0;
	
}
