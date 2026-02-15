#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<int>arr(10,-1);
    cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(2);
    arr.push_back(6);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }


    return 0; 
    
}