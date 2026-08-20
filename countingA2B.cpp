#include<iostream>
using namespace std;
void count(int a,int b){
    if(a>b){
        return;
    }
     cout<<a<<"";
    count(a+1,b);
}
int main(){
    int a,b;
    cout<<"enter the startinng number:";
    cin>>a;
    cout<<"enter the ending number:";
    cin>>b;
    count(a,b);
    return 0;
}