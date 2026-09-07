#include<iostream>
#include<string>
#include<cctype>
using namespace std;
struct employe{
    string name;
    int age;
    float salary;

};

int main(){
    employe e[3];
    cout<<"~~Employee details~~"<<endl;
    for(int i=0;i<3;i++){
        cout<<"Enter the details of employee:"<<i+1<<endl;
        cout<<"enter the name:";
        cin>>e[i].name;
        cout<<"enter the age of the employe:";
        cin>>e[i].age;
        cout<<"enter the ssalary  of the employe:";
        cin>>e[i].salary;
    }

cout<<"all the employe details are!!"<<endl;
for(int i=0;i<3;i++){
    cout<<"employe:"<<i+1<<endl;
    cout<<"name:"<<e[i].name<<endl;
    cout<<"age:"<<e[i].age<<endl;
    cout<<"salary:"<<e[i].salary<<endl;
}
return 0;
}