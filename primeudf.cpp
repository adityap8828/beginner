#include<iostream>
using namespace std;
void primenum(int n){
    if(n<=1){
        cout<<"the number is not a prime number.";
        return;
    }
    for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"the number is not a prime number.";
        return;
    }
}

    cout<<"the number is a prime number.";
    

}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
primenum(a);
return 0;
}