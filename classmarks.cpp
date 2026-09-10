#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    public:
    void setmarks(int n){
        if(n>0 && n<=100){
            marks=n;
        }
    }
    void display(){
        cout<<"marks  are:"<<marks;
    }

};
int main(){
    int n;
    student s;
    cout<<"enter the  marks:"<<endl;
    cin>>n;
    s.setmarks(n);
    s.display();
    return 0;
}