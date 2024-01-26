#include <iostream>
using namespace std;

class MyClass {
    private:
        int data;
    public:
        // Default Constructor
        MyClass() {
            data = 0;
        }

  
        MyClass(int d) {
            data = d;
        }

        MyClass(const MyClass &source) {
            data = source.data;
        }
        
        int getData() {
            return data;
        }

        void setData(int d) {
            data = d;
        }
};

int main() {
    MyClass obj1(5); // Calls parameterized constructor
    MyClass obj2(obj1); // Calls copy constructor

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    return 0;
}