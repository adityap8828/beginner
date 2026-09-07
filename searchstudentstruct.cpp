#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int rollnum;
    int age;
};

int main(){
    student s[5];
    cout<<"~~student details~~"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter name:";
        cin>>s[i].name;
        cout<<"enter roll number:";
        cin>>s[i].rollnum;
        cout<<"enter age:";
        cin>>s[i].age;
    }
    int  rollnum;
    cout<<"enter the roll number to find:";
    cin>>rollnum;
    for(int i=0;i<5;i++){
        if(s[i].rollnum==rollnum){
            cout<<"student number:"<<i+1<<endl;
            cout<<"student name:"<<s[i].name<<endl;
            cout<<"student roll number:"<<s[i].rollnum<<endl;
            cout<<"student age:"<<s[i].age<<endl;
            break;
        }
    }
    return 0;

}