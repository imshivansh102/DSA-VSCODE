// // Length of string.

// #include<iostream>
// #include<string.h>
// using namespace std;

// int getlength(char arr[]){
//     int i=0;
//     int length=0;

//     while(arr[i] != '\0'){
//         length++;
//         i++;
//     }
//     return length;
// }
// int main(){
//     char arr[100];
//     cin >> arr; // we use getline function for taking input after gap.
//     // cin.getline(arr,50);
//     // we use strlen() for direct find length.
//     // cout<<"length is->"<< strlen(arr)<<endl;
    
//     cout <<"length is:"<< getlength(arr) << endl;

//     return 0;
// }

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string s="abc";

    int n = s.length();
    int count = 0;
    string temp = "";    
    for (int i = 0; i < n; i++) { // find all substrings.
        
        for (int j = i; j < n; j++) {
            temp += s[j];
        }
    }    
    cout<< "substrings are:"<<temp<<endl;
}