#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c;
    cout<<"enter the coefficient of the equations:"<<endl;
    cin>>a>>b>>c;
    cout<<"the quadratic equation is:"<<a<<"x^2"<<b<<"x"<<c<<endl;
    double d=b*b-4*a*c;
    if(d>0){
        double root1=(-b+sqrt(d))/2*a;
        double root2=(-b-sqrt(d))/2*a;
        cout<<"the roots of the equation are:\n"<<"("<<root1<<","<<root2<<")";
    }
    else if(d==0){
        double root=-b/(2*a);
        cout<<"the root of the equation is:\n"<<root;
    }
    else
    cout<<"the roots are complex!\n";
    return 0;
}