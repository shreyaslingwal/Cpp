#include<iostream>
using namespace std;
class B;
class C;
class A{
    private:
    int a=10;
    protected:
    int b=20;
    public:
    friend void display(A,B,C);
};;
class B{
    private:
    int c=52;
    protected:
    int d=23;
    public:
    friend void display(A,B,C);    
};
class C{
    private:
    int e=50;
    protected:
    int f=26;
    public:
    friend void display(A,B,C);    
};
void display(A t1,B t2,C t3){
    cout<<t1.a<<" "<<t1.b<<endl;
    cout<<t2.c<<" "<<t2.d<<endl;
    cout<<t3.e<<" "<<t3.f<<endl;
}


int main()
{
    A ob1;
    B ob2;
    C ob3;
    display(ob1,ob2,ob3);
return 0;
}