#include<iostream>
using namespace std;

class A{
    int a,b,c;
    public:
    void getdata(int e,int f,int d){
        a=e;
        b=f;
        c=d;
    }
    virtual void sum(){
        cout<<a+b+c<<endl;
    }
};
class B : public A{
    int q,w,r;
    public:
    void getdata(int e,int f,int d){
         A::getdata(e, f, d);
        q=e;
        w=f;
        r=d;
    }
    void sum(){
        cout<<q+w+r<<endl;
}
    void displaybasesum(){
        A::sum();
    }
};


int main(){
    A ob1;
    B ob2;
    ob1.getdata(4,3,2);
    ob2.getdata(5,3,1);
    ob2.displaybasesum();

    A* ptr=&ob2;
    ptr->sum();
return 0;
}