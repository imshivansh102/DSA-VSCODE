#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[],int size,int& min, int i){
    // base case.
    if(i>=size){
        return;
    }
    if( min >= arr[i] ){ // ek case solve kar dia.baki recursion call.
        min = arr[i];
    }
    // Recursive call.
    findMin(arr,size,min,i+1);

}

int main(){

    int arr[5] = {45,3,6,77,54};
    int size = 5;
    int i = 0;

    int min = INT_MAX;
    findMin(arr,size,min,i);
    cout << "min element is:"<< min << endl;

    return 0;
}