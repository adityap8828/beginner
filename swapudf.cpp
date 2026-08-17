#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nafter swapping:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}

int main(){
    int x,y;
    cout<<"enter two numbers:"<<endl;
    cin>>x>>y;
    cout<<"a="<<x<<" b="<<y; 
    swap(x,y);
    return 0;
}