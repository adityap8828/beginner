#include <iostream>
using namespace std;
void number(int n){
    if(n<1){
        return ;
    }
    if(n%2!=0){
        number(n-2);
         cout<<n<<"";
    }
    else
    number(n-1);
   
}
int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    number(a);
    return 0;

}
