#include<iostream>
using namespace std;
int main(){
    int n;
    int first=0,second=1;
    cout<<"enter the number till we want the series:";
    cin>>n;
    for(int i=0;i<=n;++i){
        cout<<first<<" ";
        int next=first+second;
        first=second;
        second=next;
        
    }
}