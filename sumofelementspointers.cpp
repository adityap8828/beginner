#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array  elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int *ptr=arr;
    for(int i=0;i<n;i++){
        sum=sum+*ptr;
        ptr++;
    }
    cout<<"the sum of the elements in the array are:"<<sum;
    return 0;

}