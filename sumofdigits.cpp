#include<iostream>
using namespace std;
int sumofdig(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumofdig(n/10);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<sumofdig(n);
    return 0;
}