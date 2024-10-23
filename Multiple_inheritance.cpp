#include<iostream>
using namespace std;

class parent1{
    protected:
    int num1;
};

class parent2{
    protected:
    int num2;
};

class child :public parent1,public parent2{
    int c;
    public:
    child(int a,int b){
        num1=a;
        num2=b;
        c=num1+num2;
    }
    void display(){
        cout<<"Sum of numbers::"<<c;
    }
};

int main(){
    child s(8,10);
    s.display();
    return 0;
}