#include<iostream>
using namespace std;
int main(){
    int n;
    double bal=0;
    double dep,with;
    while(1){
    cout<<"~~~ATM Menu~~~"<<endl;
    cout<<"1.Check balance\n";
    cout<<"2.Deposit\n";
    cout<<"3.Withdraw\n";
    cout<<"4.Exit\n";
    cout<<"Enter your choice:\n";
    cin>>n;
    switch(n){
        case 1:
        cout<<"The current balance is:"<<bal<<endl;
        break;
        case 2:
        cout<<"Enter the amount to be deposited:\n";
        cin>>dep;
        if(dep<0){
            cout<<"amount cannot be negative.please enter the positive amount!"<<endl;
        }
        else{
            bal=bal+dep;
            cout<<"The amount deposited and current balance is:"<<bal<<endl;
        }
        break;
        case 3:
        cout<<"enter the number to be withdrawn:"<<endl;
        cin>>with;
        if(with<0){
            cout<<"the amount entered is invalid!\n";
        }
        else if(with>bal){
            cout<<"the balance is insufficient 😔\n";
        }
        else{
            bal=bal-with;
            cout<<"The amount is withdrawn and current balance is:"<<bal<<endl;
        }
        break;
        case 4:
        cout<<"Thank you!!"<<endl;
        exit(0);
        default:
        cout<<"please enter options from 1 to 4!!"<<endl;
    }
}
    return 0;

}