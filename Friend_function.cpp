#include<iostream>
#include<string>
using namespace std;

class student{
    string name;
    int age;
    string dept;
    string course;
    public:
    void getname(string n){
        name=n;
    }
    void getage(int a){
        age=a;
    }
    void getdept(string d){
        dept=d;
    }
    void getcourse(string c){
        course=c;
    }
    friend void display(student);
};
void display(student t){
    cout<<t.name<<endl;
    cout<<t.age<<endl;
    cout<<t.dept<<endl;
    cout<<t.course<<endl;
}

int main()
{
    student A;
    A.getname("Shreyas");
    A.getage(19);
    A.getdept("CSE");
    A.getcourse("Btech");
    display(A);
return 0;
}