#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number:";
    cin>>n;
    do{
        int last=n%10;
        sum+=last;
        n=n/10;

    }while(n>0);
    cout<<"the sum of the digits is:"<<sum;
    return 0;
}