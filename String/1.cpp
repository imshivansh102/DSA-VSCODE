// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;

// int main(){
//     char arr[100];
//     cout<<"Enter your name:"<<endl;
//     cin.getline(arr,50);
//     cout<<arr;

//     // for(int i=0; i<9;i++){
//     //     cout<<"Hello:"<<arr[i]<<endl;
//     // }

//     return 0;
// }
//.............................................................................

// lowecase/uppercase.

#include<iostream>
#include<string.h>
using namespace std;

void convertIntoUppercase(char arr[]){
    int n=strlen(arr);

    for(int i=0; i<n; i++){
        arr[i] = arr[i] - 'a' + 'A' ; // it takes ASCII VALUES and store after calculation.
    }
}

int main(){
    char arr[100] = "babbar";

    convertIntoUppercase(arr);
    cout<< arr <<endl;

    return 0;
}