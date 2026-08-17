#include<iostream>
using namespace std;
int sumofdig(int n){
    int sum=0;
    while(n>0){
        int last=n%10;
        sum=sum+last;
        n=n/10;
    }
    return sum;
}

int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    cout<<"the sum of the digits is:"<<sumofdig(a);
    return 0;

}