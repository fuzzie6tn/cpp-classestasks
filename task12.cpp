#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;
    int age;

public:
    Employee(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};


class Teacher : public Employee {
private:
    string subject;

public:
    Teacher(string n, int a, string subj) : Employee(n, a), subject(subj) {}

    void displayDetails() {
        cout << "Teacher Details:" << endl;
        display(); 
        cout << "Subject: " << subject << endl;
    }
};


class AdministrativeStaff : public Employee {
private:
    string role;

public:
    AdministrativeStaff(string n, int a, string r) : Employee(n, a), role(r) {}

    void displayDetails() {
        cout << "Details:" << endl;
        display();
        cout << "Role: " << role << endl;
    }
};

int main() {
    Teacher teacher("John", 35, "Mathematics");
    AdministrativeStaff staff("Aled", 28, "Receptionist");

    teacher.displayDetails();
    cout << endl;
    staff.displayDetails();

    return 0;
}
