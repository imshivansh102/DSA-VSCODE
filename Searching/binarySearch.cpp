// find index of target using binary search.

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        int element=arr[mid];
        if(element==target){
           return mid;
        }
        if(element<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
    return -1;

}
int main(){

    int arr[]={1,3,5,7,9,10,15,17,19,21,23,27};
    int size=12;
    int target=21;

    int indexoftarget=binarySearch(arr,size,target);

    if(indexoftarget==-1){
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target found at "<<indexoftarget<<" index."<<endl;
    }

    return 0;

}
