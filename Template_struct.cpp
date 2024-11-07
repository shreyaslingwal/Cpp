#include <iostream>
#include <string>
using namespace std;
template <class T>
struct Student {
    string name;
    int age;
    T course;
    T department;
    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> student1;
    student1.name = "Raju";
    student1.age = 20;
    student1.course = "Computer Science";
    student1.department = "Engineering";
    student1.displayData();
    cout << endl;
    return 0;
}
