#include <iostream>
using namespace std;
void count(int n){
    int count=0;
    int original=n;
    if(n<0){
        n=-n;
    }
    else if(n==0){
        cout<<1;

    }
    do{
        n=n/10;
        count++;
    }while(n!=0);

    cout<<"there are:"<<count<<" digits in "<<original;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    count(n);
    return 0;
}
