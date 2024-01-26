#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}

// Function to print prime numbers up to n
void printPrimesUpToN(int n) {
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; ++i)
        if (isPrime(i)) cout << i << " ";
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Error: Please enter a positive number.\n";
        return 1;
    }

    printPrimesUpToN(number);
    return 0;
}
