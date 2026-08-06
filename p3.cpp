#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two  numbers\n";
    cin>>a>>b;
    cout<<"the two  numbers are\n"<<"A="<<a<<"\tB="<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\na="<<a<<"\nb="<<b;

}
