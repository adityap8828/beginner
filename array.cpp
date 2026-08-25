#include<iostream>
using namespace std;
void array(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array elements are:";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
}
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    array(arr,n);
}