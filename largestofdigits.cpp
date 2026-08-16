#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        int last=i%10;
        int small=last;
        if(last>small){
            cout<<"the largest number is:"<<last;
        }
        n=n/10;

    }
}