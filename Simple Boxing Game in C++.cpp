#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Boxer {
public:
    string name;
    int health;
    int attackPower;

    Boxer(string name, int health, int attackPower)
        : name(name), health(health), attackPower(attackPower) {}

    bool isAlive() {
        return health > 0;
    }

    void punch(Boxer &opponent) {
        int damage = rand() % attackPower + 1; // Random damage between 1 and attackPower
        opponent.health -= damage;
        cout << name << " punches " << opponent.name << " for " << damage << " damage!" <<endl;
    }
};

void displayHealth(Boxer &boxer1, Boxer &boxer2) {
    cout << boxer1.name << "'s Health: " << boxer1.health << endl;
    cout << boxer2.name << "'s Health: " << boxer2.health << endl;
}

int main() {
   srand(static_cast<unsigned int>(std::time(0))); // Seed for random number generation

    // Create two boxers
    Boxer boxer1("Boxer 1", 100, 20);
    Boxer boxer2("Boxer 2", 100, 20);

   cout << "Welcome to the Boxing Game!" << endl;

    // Game loop
    while (boxer1.isAlive() && boxer2.isAlive()) {
        displayHealth(boxer1, boxer2);

        // Boxer 1's turn to punch
        boxer1.punch(boxer2);
        if (!boxer2.isAlive()) {
            cout << boxer2.name << " has been knocked out! " << boxer1.name << " wins!" << endl;
            break;
        }

        // Boxer 2's turn to punch
        boxer2.punch(boxer1);
        if (!boxer1.isAlive()) {
           cout << boxer1.name << " has been knocked out! " << boxer2.name << " wins!" <<endl;
            break;
        }

        cout << endl; // Add a blank line for better readability
    }

   {
    srand(static_cast<unsigned int>(std::time(0))); // Seed for random number generation

    // Create two boxers
    Boxer boxer1("Boxer 1", 100, 20);
    Boxer boxer2("Boxer 2", 100, 20);

    cout << "Welcome to the Boxing Game!" << endl;

    // Game loop
    while (boxer1.isAlive() && boxer2.isAlive()) {
        displayHealth(boxer1, boxer2); // Display health of both boxers

        // Boxer 1's turn to punch
        boxer1.punch(boxer2);
        if (!boxer2.isAlive()) {
            cout << boxer2.name << " has been knocked out! " << boxer1.name << " wins!" << endl;
            break;
        }

        // Boxer 2's turn to punch
        boxer2.punch(boxer1);
        if (!boxer1.isAlive()) {
            cout << boxer1.name << " has been knocked out! " << boxer2.name << " wins!" << endl;
            break;
        }

        cout << endl; // Add a blank line for better readability
    }

    return 0;
}
}