#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string sent1;
string sent2;
int count=0;
cout<<"enter the first string:";
getline(cin,sent1);
cout<<"enter the second string:";
getline(cin,sent2);
for(int i=0;i<sent1.size();i++){
    if(sent1[i]==sent2[i]){
       count++;
    }

}
if(count==sent1.size()){
    cout<<"both the strings are same.";
}
else
cout<<"both strinngs are diffeerent.";
return 0;

}