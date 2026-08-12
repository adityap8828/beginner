#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the orde of matrix(nxn):";
    cin>>n;
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            if(i==1||j==n||j==1||i==n||i==j){
                cout<<"* ";
            }
            else
            cout<<"  ";


        }
        cout<<endl;
    }
    return 0;

}