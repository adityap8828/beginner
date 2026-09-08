#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int rollnum;
    int marks;
};

int main(){
    student s[5];
    cout<<"~~student details~~"<<endl;
    for(int i=0;i<5;i++){
        cout<<"enter name:";
        cin>>s[i].name;
        cout<<"enter roll number:";
        cin>>s[i].rollnum;
        cout<<"enter marks:";
        cin>>s[i].marks;
    }
    int  marks;
    int count=0;
    cout<<"enter the marks to find:";
    cin>>marks;
    for(int i=0;i<5;i++){
        if(s[i].marks>marks){
            count++;
        }
    }
    cout<<"total  numbber of students above "<<marks<<" are:"<<count;
    return 0;

}