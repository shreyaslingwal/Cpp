#include <iostream>
#include <string>
using namespace std;

template <class T>
class Student {
    string name;
    int age;
    T course;
    T department;
    public:
    Student(string n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}
    void displayData(){
        cout << name << endl;
        cout << age << endl;
        cout << course << endl;
        cout << department << endl;
    }
};

int main() {
    Student<string> student1("Ram", 20, "Computer Science", "Engineering");
    student1.displayData();
    cout << endl;
    Student<string> student2("Shreyas", 19, "Mathematics", "Science");
    student2.displayData();
    return 0;
}
