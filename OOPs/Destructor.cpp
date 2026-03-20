
#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;
    public:
    char level;
    // simple constructor.
    Hero() {
        cout << "constructor is called." << endl;
    }
    // Parameterised Constructor.
    Hero(int health) {
        this -> health = health;
    }
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout << level << endl;
        cout << health << endl;
    }

    int getHealth() {
        return health;
    }
    int getLevel() {
        return level;
    }
    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }
    // Destructor.
    ~Hero() {
        cout << "Destructor is called." << endl;
    }

};

int main() {

    // Static.
    Hero a; // for static,destructor automatically called.

    // Dynamic.
    Hero *b = new Hero(); //  But for dynamic,destructor should called manually.
    delete b; // Manually destructor is called.

    return 0;

}