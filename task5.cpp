#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee{
    public:
    int year;
    string name;
    int salary;
    string address;

    void display(){
        cout<<name<<setw(6)<<year<<setw(6)<<salary<<setw(6)<<address<<endl;
    }

};
int main(){
    Employee  E1, E2, E3;
    E1.name = "Robert";
    E1.address =  "64C";
    E1.salary =  20000;
    E1.year =  2001;

    E2.name = "Sam";
    E2.address =  "65V";
    E2.salary =  30000;
    E2.year = 2000  ;

    E3.name =  "John";
    E3.address =  "67P";
    E3.salary =  12000;
    E3.year =  1990;

    cout<<"Name"<<setw(7)<<"Year"<<setw(8)<<"Salary"<<setw(8)<<"Address"<<endl;
    E1.display();
    E2.display(); 
    E3.display();
}   