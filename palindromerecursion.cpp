#include<iostream>
using namespace std;
int palind(int n,int rev){
    int original=n;
    if(n==0){
        return rev;
    }
    return palind(n/10,rev*10+n%10);
    if(n==rev){
        cout<<"the number is a palindrome:";
    }
    else{
        cout<<"the number is not a palindrome.";
    }
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<palind(n,0);
    return 0;
    
}