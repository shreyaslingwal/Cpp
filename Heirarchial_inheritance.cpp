#include<iostream>
using namespace std;

class base{
    protected:
    int num1,num2;
};

class One:public base{
    public:
    One(){
        num1=10;
    }
    void display(){
        cout<<"first number::"<<num1<<endl;
    }
};

class Second:public base{
    public:
     Second(){
        num2=20;
    }
    void display(){
        cout<<"second number::"<<num2;
    }
};

int main(){
    One a;
    a.display();
    Second b;
    b.display();
    return 0;
}