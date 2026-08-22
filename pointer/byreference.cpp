#include<iostream>
using namespace std;

void solve(int& num){ // pass by reference. so it changes and no copy created.
    num++;
}

int main(){

    int a  = 4;

    solve(a);
    
    cout << a << endl;

    return 0;
}