// uses of getter and setter.

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
    void setHealth(int h) {
        health = h;
    }

};

int main() {
    // static allocation.creation of object statically.
    Hero ramesh;
    // use of getter.
    cout << "ramesh health is:" << ramesh.getHealth() << endl;
    ramesh.level = 'A';
    // use of setter.
    ramesh.setHealth(69);

    cout << "new health is:" << ramesh.getHealth() << endl;
    cout << "level is:" << ramesh.level << endl;
    ramesh.print();// calling member function.

    return 0;

}