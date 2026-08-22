#include<iostream>
using namespace std;
int reverse(int n,int rev){
    if(n==0){
        return rev;
    }
    return reverse(n/10,rev*10+n%10);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<reverse(n,0);
    return 0;
}