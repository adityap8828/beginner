#include<iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array elements are={"<<arr[n]<<"}";


}