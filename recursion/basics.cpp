#include<iostream>
using namespace std;

int factorial(int n){

    //base condition.
    if(n==1){
        return 1;
    }
    // Recursive relation.
    int chotiProblem = factorial(n-1);
    int badiProblem = n * chotiProblem;

    return badiProblem;
}

int main(){

    int n;;
    cout<<"Enter the value of n "<<endl;
    cin >> n;

    int ans = factorial(n);

    cout<<"factorial of n is:"<<ans<<endl;

    return 0;
}
