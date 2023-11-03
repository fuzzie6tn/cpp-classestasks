#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int phone;
    int rollNo;
};

int main(){
    string name, name2;
    Student St1, St2;
    name = "Sam";
    name2 = "John";
    
    St1.phone = 121212;
    St2.phone = 131313;

    St1.rollNo = 10;
    St2.rollNo = 10;

    cout<<name<<":"<<endl;
    cout<<"Phone: "<< St1.phone<<endl;
    cout<<"Roll No: "<<St1.rollNo<<endl;

    cout<<name2<<":"<<endl;
    cout<<"Phone: "<<St2.phone<<endl;
    cout<<"Roll No: "<<St2.rollNo<<endl;

    return 0;
}