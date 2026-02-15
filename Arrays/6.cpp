//OPERATORS AND FOR LOOPING


#include<iostream>
using namespace std;
int main(){
    
  /*int a=1;
    int b=2;
    if(a-->0 && ++b>2){
        cout<< "Stage1 - Inside If "; 
    }
    else{
        cout<< "Stage2 - Inside else ";
    }
    cout<< a <<" "<< b << endl;


 int a, b=1;
    a= 10;
    if(++a){
        cout<< b;
    }
    else{
        cout<< ++b;
    }


    //some concepts of loop.

    int n;
    cin>>n;
   // in this way we use for loop.  
    for(int i=1; i<=n; i++){
        cout<< i << endl;
    }

    int n;
    cin>>n;
    cout<<"print count from 1 to n"<< endl;
    int i=1;
    for(;;){
        if(i<=n){
            cout<< i << endl;
        }
        else{
            break;
        }
        i++;
    }*/

    // sum of numbers from 1 to n.

    int n;
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
        
    }
    cout<< sum << endl;
}