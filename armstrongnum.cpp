#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number:";
    cin>>n;
    int original=n;
    do{
        int last =n%10;
        sum=sum+last*last*last;
        n=n/10;
    }while(n>0);
    if(sum==original){
        cout<<"the number is armstrong number!";
    }
    else
    cout<<"the number is not armstrong!";
    return 0;
}