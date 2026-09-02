#include<iostream>
using namespace std;
int main(){
    int n,key;
    int count=0;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array elements are=";
    for(int i=0;i<n;i++){
        cout<<arr[i];

    }
    cout<<"enter the number to find:";
    cin>>key;
    int *ptr=arr;
    for (int i=0;i<n;i++){
        if(*(ptr+i)==key){
            count++;
        }

    }
    cout<<"the number of times "<<key<<" occured is "<<count<<" times.";
    return 0;
    


}