#include<iostream>
using namespace std;

class sum{
    int *a,c,size;
    public:
    sum(int b[],int s){
        size=s;
        c=0;
        a=new int[size];
        for(int i=0;i<size;i++){
            if( b[i]>=0){
                a[i]=b[i];
                c+=b[i];
            }
            else{
                a[i]=0;
            }
        }
    }
    sum(sum &old){
        size=old.size;
        a=new int[size];
        c=0;
        for(int j=0;j<size;j++){
            a[j]=old.a[j];
            c+=old.a[j];
        }
    }
    void display(){
        cout<<"Sum of all positive numbers in array"<<c<<endl;
    }
};

int main(){
    int arr[]={2,4,-5,-3,1,1};
    int size=sizeof(arr)/sizeof(int);
    sum d(arr,size);
    d.display();
    return 0;
}