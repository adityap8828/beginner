#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=10;
    b=3;
    float result1=static_cast<float>(a)/b;
    double result2=static_cast<double>(a)/b;
    cout<<"float result is:"<<result1<< endl;
    cout<<"double result is:"<<result2;
    return 0;
}