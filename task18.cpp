#include<iostream>
#include<string>
using namespace std;
class Person{
  private:
 
  string name;
  int age;
  string address;
  
  public:
   Person(string n, string add, int a){
       name = n;
       address = add;
       age = a;
   }
   string getName(){
       return name;
   }
   string getAddress(){
       return address;
   }
   int getAge(){
       return age;
   }
  float printDetails(){
      cout<<name<<" ";
      cout<<age<<" ";
      cout<<address;
  }
};

int main(){
    Person p1("fazila", "ABC", 20);
    p1.getName();
    p1.getAddress();
    p1.getAge();
    p1.printDetails();
}
