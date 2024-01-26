#include<iostream>
#include<cctype>
using namespace std;

int main(int argc, char *argv[]){
   // for(int i=1; i<argc; i++)
   //; cout<<argv[1]+1;
    int a = atoi(argv[1]);
    int b= atoi(argv[2]);
    cout<<a+b;
    return 0;
}