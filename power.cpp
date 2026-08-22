#include<iostream>
using namespace std;
int main(){
    int exp,base;
    int pow=1;
    cout<<"enter the base:";
    cin>>base;
    cout<<"enter the exponent:";
    cin>>exp;
    for(int i=1;i<=exp;i++){
        pow=pow*base;

    }
    cout<<base<<" to the power "<<exp<<" is:"<<pow;
    return 0;
}