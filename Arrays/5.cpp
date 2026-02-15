#include<iostream>
using   namespace std;
int main(){
  /*  int n;
    cin>>n;
    // fibonacci series upto n.
    int a=0;
    int b=1;
    cout<< a <<" " << b<<" ";
    for(int i=1; i<=n; i++ ){
        int nextnumber= a+b;
        cout<< nextnumber << " ";
        a=b;
        b=nextnumber;
    }

    // number is prime or not.
    int n;
    cin>>n;
    bool isPrime = 1;
    for(int i=2; i<n; i++){
        if(n%i == 0){
           // cout<< "not a prime"<< endl;
            isPrime = 0;
            break;

        }
        
    }
    if(isPrime==0){
        cout<<"not a prime number"<< endl;
    }
    else{
        cout<<"is prime number"<< endl;
    }*/


    //leetcode problem.
    int n;
    cin>>n;
    int sum=0;
    int product=1;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
    }
    int answer=product-sum;
    cout<<answer;
}        