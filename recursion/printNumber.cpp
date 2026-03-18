#include<iostream>
using namespace std;

void printNumber(int n){
    //base case.
    if(n == 0){
        return ;
    }

    int newValueOfN = n/10;
    // recursive call.
    printNumber(newValueOfN);
    // ek case solve karunga.
    int digit = n % 10;
    cout << digit << " ";

}

int main(){

    int n = 678;

    printNumber(n);

    return 0;
}