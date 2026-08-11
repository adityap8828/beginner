#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"enter the number:"<< endl;
    cin>>n;
    if(n==0){
        cout<<"the number is ZERO\n";
    }
    else if(n>0){
        cout<<"the number is POSITIVE\n";
    }
    else
    cout<<"the number is NEGATIVE\n";
    return 0;
}