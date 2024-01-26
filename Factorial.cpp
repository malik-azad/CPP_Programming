#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n; // Read user input

    if (n < 0) {
        cout << "Factorial is undefined for negative numbers." << endl; // Check if input is negative
    } else {
        int factorialResult = 1; // Initialize the factorial result to 1

        // Calculate factorial using a for loop
        for (int i = 1; i <= n; ++i) {
            factorialResult *= i; // Multiply factorialResult by i
        }

        // Display the factorial result
        cout << "The factorial of " << n << " is " << factorialResult << endl;
    }

    return 0; // Return 0 to indicate successful program execution
}
