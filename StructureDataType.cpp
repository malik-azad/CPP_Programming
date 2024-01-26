#include <iostream>
using namespace std;

// Define a structure named 'Person'
struct Person {
    string name;
    int age;
    string gender;
};

int main() {
    // Create an object of type 'Person'
    Person person1;

    // Assign values to the members of the 'person1' object
    person1.name = "Malik Azad";
    person1.age = 21;
    person1.gender = "Male";

    // Print out the details of 'person1'
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Gender: " << person1.gender << endl;

    return 0;
}


