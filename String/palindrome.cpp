#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char arr[]){
    int i=0;
    int size=strlen(arr);
    int j=size-1;

    while(i<=j){ // two pointer approach.
        if(arr[i] != arr[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
} 

int main(){
    char arr[100];
    cin>>arr;
    if(checkPalindrome(arr)){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

    return 0;
}