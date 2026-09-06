#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s;
    char temp;
    cout<<"enter the string:";
    getline(cin,s);
    int left=0;
    int right=s.length()-1;
    while(left<right){
        temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    cout<<"the reversed string is:"<<s;
    return 0;

}
