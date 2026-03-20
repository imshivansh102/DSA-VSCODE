// find maximum number in arrray.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={2,3,6,7,8,5,32,45,89,23,21,1};
    int size=12;
    int maxi=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i]; // store the value.
        }
    }
    cout<<"maximum number is:"<<maxi<<endl;

    return 0;
    
}