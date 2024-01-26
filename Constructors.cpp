#include <iostream>

class MyNumber {
private:
    int value;

public:
    // Default Constructor
    MyNumber() : value(0) {
        std::cout << "Default Constructor: Value is set to 0\n";
    }

    // Parameterized Constructor
    MyNumber(int val) : value(val) {
        std::cout << "Parameterized Constructor: Value is set to " << val << "\n";
    }

    // Copy Constructor
    MyNumber(const MyNumber &other) : value(other.value) {
        std::cout << "Copy Constructor: Copied value from another object\n";
    }

    // Getter function
    int getValue() const {
        return value;
    }
};

int main() {
    // Using Default Constructor
    MyNumber num1;
    std::cout << "num1 value: " << num1.getValue() << "\n\n";

    // Using Parameterized Constructor
    MyNumber num2(42);
    std::cout << "num2 value: " << num2.getValue() << "\n\n";

    // Using Copy Constructor
    MyNumber num3 = num2; // Invokes the Copy Constructor
    std::cout << "num3 value: " << num3.getValue() << "\n";

    return 0;
}
