#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  

 
  bool isPalindrome = true;
  int i = 0;
  int j = str.length() - 1;
  while (i < j) {
    if (str[i] != str[j]) {
      isPalindrome = false;
      break;
    }
    i++;
    j--;
  }

 
  if (isPalindrome) {
    cout << "The string is a palindrome." << endl;
  } else {
    cout << "The string is not a palindrome." << endl;
  }

  return 0;
}