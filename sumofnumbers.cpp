#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
            sum=sum+i;
    }
            cout<<"sum of first"<<n<<"numbers is:"<<sum<<endl;
}