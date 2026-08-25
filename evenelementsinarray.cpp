#include<iostream>
using namespace std;
int elements(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"enter the size of a array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    cout<<"the number of even elements inside the array are:"<<elements(arr,n);
}