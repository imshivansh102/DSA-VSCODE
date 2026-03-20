// find target element using Linear search.

#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[6]={2,4,8,3,6,9};
    int size=6;
    int key;
    cout<<"Enter key to find:"<<endl;
    cin>>key;

    if(linearSearch(arr,size,key)){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}