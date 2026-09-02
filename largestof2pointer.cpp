#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two number:"<<endl;
    cin>>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    if(*ptr1<*ptr2){
        cout<<*ptr2<<" is the greatest number!";
    }
    else if(*ptr1==*ptr2){
        cout<<"both the numbers are same!";
    }
    else
    cout<<*ptr1<<" is the greatest number!";
    return 0;
}