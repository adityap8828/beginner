#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
int main(){
    int x ,y;
    cout<<"enter 2 numbers:"<<endl;
    cin>>x>>y;
    cout<<"the sum of 2 numbers are:"<<add(x,y);
    return 0;

}