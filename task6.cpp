#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    int salary;
    int hours;

    public:
    void getinfo(int s, int h){
        salary = s;
        hours = h; 
    }
    void AddSal(int salary,int  hours){
        if(salary<500){
            salary+=10;
        }
        cout<<salary<<endl;
        exit(1);
    }
    void AddWork(int salary,int  hours){
        if(hours>6){
            salary+=5;
        }
        cout<<salary<<endl;
        exit(1);
    }

   
};
int main(){
    Employee E;
    int salary, hours;
    cout<<"Enter your salary: "<<endl;
    cin>>salary;
    cout<<"Enter the hours: ";
    cin>>hours; 
    E.getinfo(salary, hours);
    E.AddSal(salary, hours);
    E.AddWork(salary, hours);

    return 0;
}
