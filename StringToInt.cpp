#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cout<<"Enter a string containing an integer: ";
    cin >> input;
    try{
        int intValue = stoi(input);

        cout<<" The Integer Value: "<<intValue<<endl;
        cout<<"The increment of the given integer is "<<intValue+1<<endl;
    }
    catch(invalid_argument &e){
        cout<<"Invalid Input please enter a valid integer string."<< endl;
    }
    return 0;
}