#include<iostream>
using namespace std;
int main(){
    int n,rev=0,last;
    cout<<"enter the number:";
    cin>>n;
    for(;n>0;){
        last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
    cout<<"the reversed number is:"<<rev;
    return 0;
}