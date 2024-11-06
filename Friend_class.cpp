#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setdata(int b){
        a=b;
    }
    friend class B;
};
class B{
    public:
    void Isprime(A &t){
        int c=0;
        for(int i=1;i<=t.a;i++){
            if(t.a%i==0){
                c++;
             }
        }
        if(c==2){
            cout<<"Number is prime";
        }
        else{
            cout<<"Number is not prime";
        }
    }
};

int main(){
    A ob1;
    B ob2;
    ob1.setdata(5);
    ob2.Isprime(ob1);
    return 0;

}
