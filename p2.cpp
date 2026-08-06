#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"the inputs are\n"<<"A="<<a<<"\nB="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"the swapped numbers are\n"<<"A="<<a<<"\nB="<<b<<endl;
}