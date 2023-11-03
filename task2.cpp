#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;

};

int main(){
    Student St;
    St.name ="John";
    St.roll_no = 12;

    cout<<"Name: "<<St.name<<endl;
    cout<<"roll number "<<St.roll_no<<endl;
} 