#include <iostream>

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual void draw() const = 0;
};

// Derived class: Circle
class Circle : public Shape {
public:
    // Override pure virtual function
    void draw() const override {
        std::cout << "Drawing a circle\n";
    }
};

// Derived class: Square
class Square : public Shape {
public:
    // Override pure virtual function
    void draw() const override {
        std::cout << "Drawing a square\n";
    }
};

int main() {
    // Using polymorphism with pointers to base class
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    // Calling pure virtual function
    shape1->draw();  // Draws a circle
    shape2->draw();  // Draws a square

    // Note: Cannot create an object of the abstract base class Shape
    // Shape shape; // This would result in a compilation error

    // Cleanup
    delete shape1;
    delete shape2;

    return 0;
}
