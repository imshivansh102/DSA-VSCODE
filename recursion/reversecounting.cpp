#include<iostream>
using namespace std;

void reverseCounting(int n){

    //base condition.
    if(n==0){
        return;
    }
    //processing.
    cout<< n << endl;

    //recursive relation.
    reverseCounting(n-1);

}
int main(){

    int n;;
    cout<<"Enter the value of n "<<endl;
    cin >> n;

    reverseCounting(n);

    return 0;
}