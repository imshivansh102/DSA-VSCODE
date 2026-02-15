#include<iostream>
using namespace std;
int main(){
    // //Array declare
    // int arr[6];
    // cout<< "Array created successfully" <<endl;

    // return 0;


    // // Print values of array at given index.
    // int arr[]={1,3,4,5,6};
    // cout<< arr[3] << endl ;
    // // Print all values of array.
    // for (int i=0; i<5; i++ ){
    //     cout<< arr[i] << " ";
        
    // }

    // int arr[5];
    
    // cout<< "Enter the input values in Array" << endl;
    // // Taking Input values in Array.
    // for (int i=0; i<5; i++ ){
    //     cin >> arr[i] ;
    // }
    // // Printing.
    // cout<< "Printing the values of Array " << endl;
    // for(int i=0; i<5; i++ ){
    //     cout<< arr[i] << " ";
    // }

    // Taking 5 elements input and Printing doubles of Array.
    int arr[5];
    cout<<"Enter the values of Array"<<endl;

    for(int i=0; i<5; i++ ){
        cin>>arr[i];
    }
    cout<<"Printing the values of Array"<<endl;
    
    for(int i=0; i<5; i++ ){
        cout<< 2*arr[i] <<" ";
    }

    return 0;

 
    
}