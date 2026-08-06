#include<iostream>
using namespace std;
int main(){
    int n,rev=0,last;
    cout<<"enter the number:";
    cin>>n;
    do{
        last=n%10;
        rev=rev*10+last;
        n=n/10;
    }while(n>0);
    cout<<"the reversed number is:"<<rev;
    return 0;
}