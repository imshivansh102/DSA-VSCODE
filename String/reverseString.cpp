#include<iostream>
#include<string.h>
using namespace std;

void reverseCharArray(char arr[]){
    int i=0;
    int size=strlen(arr);
    int j=size-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    char arr[100];
    cout<<"before reverse:-"<<endl;
    cin >> arr;

    reverseCharArray(arr);
    cout<<"after reverse:"<< arr <<endl; 

    return 0;
}