#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2;
    cout << "enter the first string: ";
    getline(cin, s1);
    cout << "enter the second string: ";
    getline(cin, s2);

    if (s1 == s2) {
        cout << "Both strings are equal!";
    }
    else if (s1 < s2) {
        cout << s1 << " comes first in the dictionary!";
    }
    else {
        cout << s2 << " comes first in the dictionary!";
    }

    return 0;
}