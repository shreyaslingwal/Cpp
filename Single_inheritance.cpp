#include<iostream>
using namespace std;

class Base{
    protected:
    int a,b;
    
};
class derived :public Base{
    public:
    int c;
    derived(int a,int b){
        this->a=a;
        this->b=b;
        c=a*b;
    }
    void display(){
        cout<<"Product::"<<c;
    }
};

int main(){
    derived a(5,10);
    a.display();
    return 0;

}