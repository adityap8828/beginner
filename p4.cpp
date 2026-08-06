#include<iostream>
using namespace std;
int main(){
    float F,C;
    int n;
    cout<<"~~~MENU~~~"<<endl;
    cout<<"1.farhenite  to  degree"<<endl;
    cout<<"2.degree to farhenite"<<endl;
    cout<<"enter  your choice:"<<endl;
    cin>>n;
    if(n==1){
    cout<<"enter the farhenite:\n"<< endl;
    cin>>F;
    C=(F-32)*5/9;
    cout<<"the degree is:"<<C<<endl;
    }
    else{
        cout<<"enter the degree celsius:\n"<< endl;
        cin>>C;
        F=(C*9/5)+32;
        cout<<"the farhenite is:\n"<<F<<endl;
    }
    return 0;
}