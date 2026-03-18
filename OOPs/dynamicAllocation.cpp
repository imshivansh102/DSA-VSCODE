
#include<iostream>
using namespace std;

class Hero{
    
    private:
    int health;
    public:
    char level;

    void print(){
        cout << level << endl;
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
    // static allocation.creation of object statically.
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is:" << a.level << endl; // because it is public.
    cout << "health is:" << a.getHealth() << endl; // because it is private.
    
    // dynamically creation of object.
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    // first way of printing pointer.
    cout << "level is:" << (*b).level << endl;
    cout << "health is:" << (*b).getHealth() << endl;
    // second way of printing pointer.
    cout << "level is:" << b->level << endl;
    cout << "health is:" << b->getHealth() << endl;
    

    return 0;

}