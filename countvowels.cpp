#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string name;
    int count=0;
    cout<<"enteer the strinng:";
    getline(cin,name);
    for(int i=0;i<name.size();i++){
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            count++;
        }
    }
    cout<<"the number of vowels present are:"<<count;


}

