#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int b){
        a=b;
    }
    void operator ++(){
        a=a+5;
    }
    void operator --(){
        a=a-1;
    }
    void display(){
        cout<<a<<endl;
    }
    friend void positive(A &);
    friend void negative(A &);
};
void  positive(A &t){
    if(t.a<0){
        t.a=-(t.a);
    }
   cout<< t.a<< endl;
}
void negative(A &t){
    if(t.a>0){
        t.a=-(t.a);
    }
   cout<< t.a<< endl;
}
int main(){
    A ob(10),ob1(-20);
    ++ob;
    ob.display();
    ++ob;
    ob.display();
    --ob;
    ob.display();
    --ob;
    ob.display();
    negative(ob);
    positive(ob1);
return 0;
}