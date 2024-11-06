#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a+b+c;
}
int sum(int a,int b,int c,int d){
    return a+b+c+d;
}
int main(){
    cout<<sum(5,4)<<endl;
    cout<<sum(66,4,1)<<endl;
    cout<<sum(9,4,7,6)<<endl;
return 0;
}