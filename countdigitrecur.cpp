#include<iostream>
using namespace std;
int count(int n){
    int cou=0;
    if(n<10){
        return 1;
    }
    return 1+count(n/10);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<count(n);
    return 0;

}