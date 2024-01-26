// C++ program to check whether the
// number is Armstrong number or not
#include <bits/stdc++.h>
 
using namespace std;
 
string armstrong(int n)
{
    string number = to_string(n);
 
    n = number.length();
    long long output = 0;
    for (char i : number)
        output = output + (long)pow((i - '0'), n);
 
    if (output == stoll(number))
        return ("True, Armstrong Number");
    else
        return ("False, Not Armstrong number");
}
 
// Driver Code
int main()
{
    int n;
    cout<<"Enter the Number \n";
    cin>>n;
    cout << armstrong(n) << endl;
  
}
 
// This code is made by Malik Azad