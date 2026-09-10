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
    for(int i=0;i<5;i++){
        cout<<"~~student details~~"<<endl;
        cout<<"enter name:";
        cin>>s[i].name;
        cout<<"enter roll number:";
        cin>>s[i].rollnum;
        cout<<"enter marks:";
        cin>>s[i].marks;
    }
    int highest=0;
    int lowest=0;
    for(int i=0;i<5;i++){
        if(s[i].marks>s[highest].marks){
            highest=i;
        }
        if(s[i].marks<s[highest].marks){
            lowest=i;
        }
    }
    cout<<"the highest marks out of all the student iws scored by: "<<s[highest].name<<endl;
    cout<<"the lowest  marks out of all is scored by the student: "<<s[lowest].name<<endl;
    return 0;
    
}