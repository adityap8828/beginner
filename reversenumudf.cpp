#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
        int last=n%10;
        rev=rev*10+last;
        n=n/10;

    }

    return rev;
    
}

int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    cout<<"the reversed number is:"<<reverse(a);
    return 0;
    
}