#include<iostream>
using namespace std;

class Hero{
    public:
    // Properties.
    int health;
    char level;

    void print(){
        cout << level << endl;
    }

};

int main() {
    // creation of object.
    Hero ramesh;
    // Initialize.
    ramesh.health = 100;
    ramesh.level = 'A';

    cout << "health is:" << ramesh.health << endl;
    cout << "level is:" << ramesh.level << endl;
    ramesh.print();// calling member function.

    return 0;

}