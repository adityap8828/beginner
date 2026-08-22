#include<iostream>
using namespace std;
int multi(int n){
    if(n==0){
        return 1;
    }
    return n*multi(n-1);

}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<multi(n);
    return 0;
}
