#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the number:";
    cin>>n;
    cout<<"enter the number to check divisibility with "<<n <<" :";
    cin>>x;
    int r=n%x;
    if(x==0){
     cout<<"the division is not possible!!"<<endl;
    }
    else if(n%x==0){
        cout<<"the number "<<n<<"is divisble with "<< x <<endl;
    }
    else
    cout<<"the number is not divisible and the remainder is: "<< r;
return 0;
}