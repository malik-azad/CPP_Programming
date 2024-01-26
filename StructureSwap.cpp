#include <iostream>

using namespace std;

struct Student {
  int rollno;
  string name;
};

 void swapStudentRecord(Student *std1, Student *std2) {
  Student temp = *std1;
  *std1 = *std2;
  *std2 = temp;
}

int main() {
  Student student1 = {22, "Azad Malik"};
  Student student2 = {7, "Safan Shafat"};

  cout << "Before swapping: " << endl;
  cout << "Student 1: " << student1.rollno << ", " << student1.name << endl;
  cout << "Student 2: " << student2.rollno << ", " << student2.name << endl;

  swapStudentRecord(&student1, &student2);

  cout << "After swapping: " << endl;
  cout << "Student 1: " << student1.rollno << ",  " << student1.name << endl;
  cout << "Student 2: " << student2.rollno << ",  " << student2.name << endl;

  return 0 ;
}