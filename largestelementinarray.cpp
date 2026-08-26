#include<iostream>
using namespace std;

int largestnum(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:"<<endl;
    cout<<"the largest number in the array is:"<<largestnum(arr,n);
    return 0;
}