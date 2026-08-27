#include<iostream>
using namespace std;
int index(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
            return i;
        }
    }
}

int main(){
    int key,n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key:";
    cin>>key;
    cout<<"the element "<<key<<" is found at "<<index(arr,n,key)<<"th position.";
    return 0;
}