#include<iostream>
using namespace std;


class Student{
    public:
    int c,d;
    Student(int a,int b){
        c=a;
        d=b;

    }
    inline void sum(){
        cout<<c+d;
    }
};
int main()
{
    Student A(6,7);
    A.sum();
    return 0;
}