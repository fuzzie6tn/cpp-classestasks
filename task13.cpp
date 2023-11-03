#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
    string name;
    string address;

    public:
    Person(string n, string a): name(n), address(a){}

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Adress: "<<address<<endl;
    }
};

class Student : public Person{
    private:
    int regNo;

    public:
    Student( string n, string a, int r) : Person(n,a), regNo(r){}
    void display2(){
        cout<<"Registor Number : "<<regNo<<endl;
    }
};

int main(){
    Person P("John", "4BC street");
    Student S("John", "4BC street", 12);
  

    P.display();
    S.display2();
}