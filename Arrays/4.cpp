#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter the value of ch"<<endl;
    cin>>ch;
    if(ch>= 'a' && ch<= 'z'){
        cout<<"ch is lowercase"<<endl;

    }
    else if(ch>= 'A' && ch<= 'Z'){
        cout<<"ch is upercase"<<endl;
    }
    else if(ch>= '0' && ch<= '9'){
        cout<<"ch is numeric"<<endl;
    }
    else{
        cout<<"ch is special character"<<endl;
    }
}