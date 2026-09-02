#include<iostream>
using namespace std;
void swap(int *ptr1,int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout<<"a is:"<<*ptr1<<"\nb is:"<<*ptr2;

}
int main(){
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    cout<<"so,a is:"<<*ptr1<<" \nb is:"<<*ptr2;
    cout<<"\nand after swapping."<<endl;
    swap(ptr1,ptr2);
    return 0;

}