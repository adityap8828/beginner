#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=*arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
    }
    cout<<"the greatest element is:"<<max;
    return 0;
}