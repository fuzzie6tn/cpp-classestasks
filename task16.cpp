#include <iostream>
#include <string>
using namespace std;

// Base class for Character
class Character {
protected:
    string name;
    int health;

public:
    Character(string n, int h) : name(n), health(h) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Health Points: " << health << endl;
    }
};

// Derived class for Hero
class Hero : public Character {
private:
    int heroPower;

public:
    Hero(string n, int h, int power) : Character(n, h), heroPower(power) {}

    void displayHeroInfo() {
        cout << "Hero Power: " << heroPower << endl;
        displayInfo(); // Reuse the displayInfo method from the base class
    }
};

// Derived class for Villain
class Villain : public Character {
private:
    int villainEvilness;

public:
    Villain(string n, int h, int evilness) : Character(n, h), villainEvilness(evilness) {}

    void displayVillainInfo() {
        cout << "Villain Evilness: " << villainEvilness << endl;
        displayInfo(); // Reuse the displayInfo method from the base class
    }
};

int main() {
    Hero superhero("Superman", 100, 95);
    Villain evilVillain("Lex Luthor", 80, 90);

    cout << "Hero Info:" << endl;
    superhero.displayHeroInfo();
    cout << endl;
    
    cout << "Villain Info:" << endl;
    evilVillain.displayVillainInfo();

    return 0;
}
