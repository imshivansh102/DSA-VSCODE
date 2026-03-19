
#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;
    public:
    char level;
    // simple constructor.
    Hero() {
        cout << "constructor is called" << endl;
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

};

int main() {

    // Hero ramesh;// statically constructor called.

    // Hero *h = new Hero(); // dynamically.
    Hero S(70, 'C');
    S.print();
    // Copy constructor.
    Hero R(S);
    R.print();

    return 0;

}