#include<iostream>
using namespace std;

class swapno{
    int num1,num2;
    public:
    swapno(int a,int b){
        num1=b;
        num2=a;
    }
    void display(){
    cout<<"after swapping::"<<num1<<"\t"<<num2;
    }
};

int main(){
    swapno s(2,5);
    s.display();
    return 0;
}