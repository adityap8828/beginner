#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int a[n],b[n];
    cout<<"enter the first array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the second array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
     bool same=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            same=false;
            
            break;
        }
    }
        if(same){
            cout<<"both the arrays are same.";
        }
        else
        cout<<"the arrays are different.";

    return 0;

    }