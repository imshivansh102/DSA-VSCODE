#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.front() << endl; // 10

    q.pop();

    cout << "front:" << q.front() << endl; // 20

    cout << "Rear:" << q.back() << endl;   // 30

    return 0;

}