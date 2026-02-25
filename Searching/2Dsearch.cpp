// Binary search in 2D matrix or array.
// Search target element in 2D array.

#include<iostream>
using namespace std;

// In 2D array only 1st bracket should empty rest all should filled.

bool binarySearch2Darray(int arr[][4],int target,int rows,int cols){
    int start=0;
    int end=rows*cols-1;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        int rowindex=mid/cols;
        int colsindex=mid%cols;

        if(arr[rowindex][colsindex]==target){
            return true;
        }
        else if(arr[rowindex][colsindex]>target){
            end=mid-1; // search on the left side of array. 
        }
        else if(arr[rowindex][colsindex]<target){
            start=mid+1; // Search on the right side of array.
        }
        mid=start+(end-start)/2;
    }
    
    return false; // Element not found.
} 


int main(){

    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int cols=4;
    int target;
    cout<<"Enter the input target element."<<endl;
    cin>>target;

    bool ans=binarySearch2Darray(arr,target,rows,cols);

    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;

}