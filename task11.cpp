#include <iostream>
#include <string>
using namespace std;

class Character {
private:
    string name;
    int health;

public:
    Character(string n, int h) : name(n), health(h) {}

    void getOutput() {
        cout << "Name of Character: " << name << endl;
        cout << "Health remaining: " << health << endl;
    }
};

class PlayerCharacter : public Character {
private:
    string PlayerName;
    int PlayerHealth;

public:
    PlayerCharacter(string Pn, int Ph) : Character(Pn, Ph), PlayerName(Pn), PlayerHealth(Ph) {}

    void getOutput2() {
        cout << "Player Name: " << PlayerName << endl;
        cout << "Player Health: " << PlayerHealth << endl;
    }
};

int main() {
    Character C("Jack", 100);
    PlayerCharacter Pc("Joplie", 90);

    cout << "About Character: " << endl;
    C.getOutput();

    cout << "\nAbout Player Character: " << endl;
    Pc.getOutput();
    Pc.getOutput2();
}
