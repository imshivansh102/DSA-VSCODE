// find the odd occuring element in array.

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){ // when there is only single element.
            return s; 
        }
        // when mid is even or odd.
        if(mid%2==0){ // when mid is even.
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{ // when mid is odd.
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }    
        mid=s+(e-s)/2;
    }
    
    return -1;

}

int main(){
    vector<int>arr{1,1,2,2,5,5,7,8,8,9,9};
    int ans=solve(arr);

    cout<<"index is:"<<ans<<endl;
    cout<<"ans is:"<<arr[ans];

    return 0;
}