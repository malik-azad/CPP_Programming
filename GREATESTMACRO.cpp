#include<iostream>
using namespace std;
#define MAX(x,y)  (((x)>(y)) ? (x):(y))
#define GREATEST(x,y,z) MAX((MAX(x,y)), (z))
int main()
{
 int a = 4, b = 8, c = 6;

cout<< " Greatest Number among three is : "<< GREATEST(a, b, c);
return 0;
}