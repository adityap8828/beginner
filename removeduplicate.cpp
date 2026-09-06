#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,3,4,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int slow=0;
    for(int fast=1;fast<n;fast++){
        if(arr[fast]!=arr[slow]){
            slow++;
            arr[slow]=arr[fast];
        }

    }
    for(int i=0;i<slow;i++){
        cout<<arr[i]<<"";
    }
    return 0;
    
}