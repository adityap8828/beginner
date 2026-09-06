#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string name;
    int count=0;
    cout<<"enter the sentencces:";
    getline(cin,name);
    for(int i=0;i<name.length();i++)
    if(isupper(name[i])){
        count++;
    }
    cout<<"the number of uppercase letters in the sentences are:"<<count;

}
