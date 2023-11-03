#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
private:
    string name;
    int age;

public:
    Animal(const string& n, int a) : name(n), age(a) {}

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

// Derived class
class Mammal : public Animal {
public:
    Mammal(const string& n, int a) : Animal(n, a) {}
};

// Derived class
class Reptile : public Animal {
public:
    Reptile(const string& n, int a) : Animal(n, a) {}
};

// Derived class
class Bird : public Animal {
public:
    Bird(const string& n, int a) : Animal(n, a) {}
};

int main() {
    Mammal cheetah("Cheetah", 8);
    Reptile crocodile("Croc", 6);
    Bird sparrow("Sparrow", 4);

    cout << cheetah.getName() << " " << cheetah.getAge() << endl;
    cout << crocodile.getName() << " " << crocodile.getAge() << endl;
    cout << sparrow.getName() << " " << sparrow.getAge() << endl;

    return 0;
}
