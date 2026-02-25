// Divide two numbers and find quotient using binary Search.(either positive or negative no.)

#include<iostream>
using namespace std;

int findQuotient(int dividend,int divisor){
    int s=0;
    int e=abs(dividend);
    int mid=s+(e-s)/2;
    int ans=0;

    while(s<=e){
        if(abs(mid*divisor)==abs(dividend)){ // we got perfect solution.
            ans=mid;
            break;
        }
        else if(abs(mid*divisor)>abs(dividend)){ // left search.
            e=mid-1;
        }
        else{ // right search.
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return ans;
    }
    else{
        return -ans;
    }

}

int main(){
    int dividend=78;
    int divisor=7;

    int result=findQuotient(dividend,divisor);

    cout<<result;
    return 0;

}