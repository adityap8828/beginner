#include<iostream>
using namespace std;
int compare(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<"is greatest of three numbers.";
    }
    else if(b>a&&b>c){
        cout<<b<<"is greatest of three numbers.";
    }
    else
    cout<<c<<"is greatest of three numbers.";

}
int main(){
    int x,y,z;
    cout<<"enter three numbers:"<<endl;
    cin>>x>>y>>z;
    cout<<compare(x,y,z);
    return 0;

}