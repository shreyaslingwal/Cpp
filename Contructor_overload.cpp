#include<iostream>
using namespace std;

class overload{
    int a,b,sum;
    float c,d,sum1;
    char e,f;
    enum datatype { INT_TYPE, FLOAT_TYPE, CHAR_TYPE } datatype;
    public:
    overload(int a,int b){
        this->a=a;
        this->b=b;
        sum=a+b;
        datatype=INT_TYPE;
    }
    overload(float c,float d){
        this->c=c;
        this->d=d;
        sum1=c+d;
        datatype=FLOAT_TYPE;
    }
    overload(char e,char f){
        this->e=e;
        this->f=f;
        datatype=CHAR_TYPE;

   }
    void display(){
         
        switch (datatype) {
            case INT_TYPE:
                cout << "Sum of integers: " << sum << endl;
                break;
            case FLOAT_TYPE:
                cout << "Sum of floats: " << sum1 << endl;
                break;
            case CHAR_TYPE:
                cout << "sum of Characters: " << e  << f << endl;
                break;
        }
        
    }
};

int main(){
    overload h(5,10);
    h.display();
    overload g(3.2f,5.0f);
    g.display();
    overload j('A','B');
    j.display();
    return 0;

}