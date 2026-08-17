#include<iostream>
using namespace std;
float add(float s){
    return s*s;
}
float add(float l,float b){
    return l*b;
}

int main(){
    float a,b,c;
    cout<<"enter the side of the square:";
    cin>>a;
    cout<<add(a)<<endl;
    cout<<"enter the length and breadth:"<<endl;
    cin>>b>>c;
    cout<<"length:"<<b<<" breadth:"<<c<<endl;
    cout<<"the area of rectangle is:"<<add(b,c)<<endl;
    return 0;
}