// find the first occurence of elements.

#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){ // store the answer and search left side of array.
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){ // serach left side of array.
            end=mid-1;
        }
        else if(arr[mid]<target){ // search right side of array.
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }

    return ans;

}

int main(){
    vector<int>arr{1,3,5,5,5,5,5,5,6,7,9};
    int target=5;

    int targetElement=firstOccurence(arr,target);
    cout<<"target index is "<<targetElement<<" index."<<endl;

    return 0;

}