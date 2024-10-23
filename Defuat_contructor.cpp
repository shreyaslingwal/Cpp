#include<iostream>
using namespace std;


class Sum{
    public:
    int a,c;
    Sum(void){
        c=0;
    }
    void sum(){
        for(int i=1;i<=a;i++){
            c+=i;
        }
        cout<<"Sum of n numbers::"<<c;
    }
};

int main(){
    Sum s;
    s.a=12;
    s.sum();
    return 0;

}