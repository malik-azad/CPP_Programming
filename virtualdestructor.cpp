#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }

    virtual ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }

    ~Derived() override {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    Base* basePtr = new Derived();  // Object created through base class pointer

    delete basePtr;  // Calls the derived class destructor through the virtual destructor

    return 0;
}
