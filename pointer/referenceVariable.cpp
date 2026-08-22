#include<iostream>
using namespace std;

int main(){

    int a  = 4;
    // creating a reference variable.
    int& b = a;

    cout << a << endl;
    cout << b << endl;

    a++; // if we change a then b also changed and vice versa.
    cout << a << endl;
    cout << b << endl;

    b++;
    cout << a << endl;
    cout << b << endl;

    return 0;
}