#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    
};

class first:public Base{
    protected:
    int b;
};

class second:public first{
    int c;
    public:
    second(int a,int b){
    this->a=a;
    this->b=b;
    c=a+b;
    }
    void display(){
        cout<<"Sum of numbers::"<<c;
    }
};

int main(){
    second s(4,5);
    s.display();
    return 0;

}
