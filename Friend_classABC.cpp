#include<iostream>
using namespace std;

class A{
    private:
    int a=1;
    protected:
    int b=2;
    public:
    friend class D;
};;
class B{
    private:
    int c=3;
    protected:
    int d=4;
    public:
    friend class D;    
};
class C{
    private:
    int e=5;
    protected:
    int f=6;
    public:
    friend class D;    
};
class D{
    public:
    void display(A t1,B t2,C t3){
    cout<<t1.a<<" "<<t1.b<<endl;
    cout<<t2.c<<" "<<t2.d<<endl;
    cout<<t3.e<<" "<<t3.f<<endl;
}
};
int main(){
    A ob1;
    B ob2;
    C ob3;
    D ob4;
    ob4.display(ob1,ob2,ob3);


return 0;
}