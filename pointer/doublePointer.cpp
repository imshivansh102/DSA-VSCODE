#include<iostream>
using namespace std;

void solve(int** ptr){
    //ptr = ptr + 1; // no change in x.
    //*ptr = *ptr + 1; // hear also no change in x.
    **ptr = **ptr + 1; // here value of x change and it is called double pointer.
}

int main(){

    int x = 12;
    int* p = &x;
    int** q = &p;

    solve(q);

    cout << x << endl;


    return 0;

}
