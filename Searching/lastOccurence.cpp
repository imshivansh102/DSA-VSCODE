// find the last occurence of target element.

#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){ // store the answer and search right side of array.
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>target){ 
            end=mid-1;
        }
        else if(arr[mid]<target){ 
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }

    return ans;

}

int main(){
    vector<int>arr{1,3,5,5,5,5,5,5,5,6,7,9};
    int target=5;

    int targetElement=lastOccurence(arr,target);
    cout<<"target index is "<<targetElement<<" index."<<endl;

    return 0;

}