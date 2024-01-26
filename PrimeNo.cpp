#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Error: Please enter a positive number.\n";
        return 1;
    }

    cout << "Prime numbers up to " << number << " are: ";
    for (int i = 2; i <= number; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
