#include<iostream>
using namespace std;
void primenum(int n){
    for(int i=0;i<=n;i++)
    if(n<0){
        cout<<"enter a positive number:";
    }
    else if(i%n==0){
        cout<<"the number is not a prime number.";
    }
    else
    cout<<"the number is a prime number.";

}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
primenum(a);
return 0;
}