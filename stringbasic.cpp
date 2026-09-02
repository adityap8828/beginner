#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
string name;

cout << "Enter age: ";
cin >> age;
cin.ignore();

cout << "Enter name: ";
getline(cin, name);

cout << name;
}