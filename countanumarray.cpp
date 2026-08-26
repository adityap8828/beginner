#include<iostream>
using namespace std;
int countnum(int arr[],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}
int main(){
    int n,key;
    cout<<"enter the size of array:";
    cin>>n;

    int arr[n];
    cout<<"enter the the number to find:";
    cin>>key;
    cout<<"enter the array elements:";
    cout<<"the number of times "<<key<<" repeated was:"<<countnum(arr,n,key);
    return 0;

}