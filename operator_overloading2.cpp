#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    void operator +(){
        cout<<a+b<<endl;
    }
    friend void  operator -(A &);
};
void operator -(A &t){
    cout<<t.a-t.b<<endl;
}
int main(){
    A ob(10,5);
    +ob;
    -(ob);

return 0;
}