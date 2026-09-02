#include<iostream>
using namespace std;
void changenum(int *ptr){
    int b;
    cout<<"enter the number to change:";
    cin>>b;
    *ptr=b;
    cout<<"the number is changed:"<<*ptr;

}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    int *ptr=&a;
    changenum(ptr);
    return 0;

}