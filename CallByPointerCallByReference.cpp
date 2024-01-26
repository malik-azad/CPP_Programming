#include <iostream>

// Function to swap two values using call by pointer
void swapP(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to swap two values using call by reference
void swapR(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    // Call swapP() using pointers
    swapP(&num1, &num2);

    std::cout << "After swapP(): num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Reset values
    num1 = 5;
    num2 = 10;

    // Call swapR() using references
    swapR(num1, num2);

    std::cout << "After swapR(): num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
