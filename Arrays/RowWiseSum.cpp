// Row wise sum print using function.

#include<iostream>
using namespace std;

void printRowWiseSum(int arr[][3],int row,int cols){

    cout << "Print row wise sum." << endl;
    
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<cols;j++){
            sum = sum + arr[i][j];
        }
        cout<< sum << endl;
    }

}

int main(){
    int arr[3][3];
    int row = 3;
    int cols = 3;
    
    // user input.
    cout<< "Enter the elements of array."<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];

        }
        cout<<endl;
    }
    cout << "Printing the Array." << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }

    printRowWiseSum(arr,row,cols);

    return 0;

}