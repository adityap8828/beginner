#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"enter the age:";
    cin>>age;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout<<"enter the username:";
    getline(cin,name);
    cout<<"the length of the string is:"<<name.length();
    return 0;
}
