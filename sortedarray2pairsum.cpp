#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[5];
    int key;
    cout<<"entr thee sorted array elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"enter thee target sum to find after adding two values:";
    cin>>key;
   int left=0;
   int right=4;
   while(left<right){
    int sum=arr[left]+arr[right];
    if(key==sum){
    cout<<"the sum is founnd by adding "<< arr[left]<<" and "<<arr[right];
    return 0;
    }
    else if(key>sum){
        left++;
    }
    else
    right--;
    
   }
   cout<<"the sum is not found!";
   return 0;

}