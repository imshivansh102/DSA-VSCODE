// find square root of a number.

#include<iostream>
using namespace std;

// there is other ways as well but this is best way to solve.

int squareRootofElement(int target) {
    int start = 0;
    int end = target; // Binary search range should be 0 to target.
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end) {

        if (mid * mid == target) {
            return mid;
        }
        else if (mid * mid > target) { 
            end = mid - 1;
        }
        else {
            ans = mid;
            start = mid + 1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int target=n;

    int result = squareRootofElement(target);
    cout << "square root is " << result << endl;
    return 0;
}
