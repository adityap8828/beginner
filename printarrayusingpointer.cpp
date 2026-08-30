#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of a array:";
    cin>>n;
    int arr[n];

    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ptr=arr;
    cout<<"the array elements are:";
    for(int i=0;i<n;i++){
        cout<<*(ptr+i);
    }


}