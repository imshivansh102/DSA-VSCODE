#include<iostream>
using namespace std;

void PrintArray(int arr[5], int size, int i){
    // base case
    if( i >= size ){
        return;
    }
    // print first element.ek case solve kardiya.
    cout << arr[i] <<" ";
    // recursive call. baki recursion sambhal lega.
    PrintArray(arr,size,i+1);


}

int main(){

    int arr[5] = {1,3,5,6,7};
    int size = 5;
    int i = 0;

    PrintArray(arr,size,i);


    return 0;
}