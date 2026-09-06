#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string name;
    cout<<"enter the sentence:";
    getline(cin,name);
    for (int i=0;i<name.length();i++){
        name[i]=toupper(name[i]);
    }
    cout<<"tne sentence is changes to all capital: "<<name;
}

