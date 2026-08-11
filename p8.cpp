#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the  number:";
    cin>>x;
    if(x&1){
        cout<<"the number is odd\n";
    }
    else
    cout<<"the number is even";
    return 0;
}