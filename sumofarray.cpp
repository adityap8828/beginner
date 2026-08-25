#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        total=total+arr[i];
    }
    return total;
}

int main(){
    int n;
    cout<<"enter the size of array;";
    cin>>n;
    int arr[n];
    cout<<"the elements are:";
    cout<<"the sum of the array is:"<<sum(arr,n);
}