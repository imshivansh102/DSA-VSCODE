// #include<iostream>
// using namespace std;

// void printcounting(int n){

//     for(int i=1; i<=n; i++ ) {
//         cout<< i << endl;
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << "counting is" <<endl;
//     printcounting(n); 
// }

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a,b;
    cin>> a >> b;
    
    cout << add(a,b);
    return 0;
}