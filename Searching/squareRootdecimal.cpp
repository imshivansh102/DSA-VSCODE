// square root of number upto decimal or fractional values.

#include<iostream>
using namespace std;

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

    int Precision;
    cout<< "Enter the no.of precise value after integer value."<<endl;
    cin>>Precision;
    double step=0.1;
    double finalans=result;

    for(int i=0;i<Precision;i++){

        for(double j=finalans; j*j<=n; j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Final answer is "<<finalans<<endl;

    return 0;
}