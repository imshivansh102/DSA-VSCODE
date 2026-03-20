//PATTERNS

#include<iostream>
using namespace std;
int main(){
  /*  int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            //if we change value of j in cout like n-j+1 then it reverse the output.
            //we have to make formula for different outputs and apply while loop.
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    } 

    //pattern of counting no's
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;

    }

    //star print of right angle triangle
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row-1;
            //'A'+1 is equal to B and 'A'+2 is equal to C.
            cout<<ch;
            
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+row +col-2;
            cout<<ch;
            //'A'+1 is equal to B and 'A'+2 is equal to C.
            //we have to map digits in letters.
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
           
            j=j+1;
        }
        cout<<endl;
        
        i=i+1;
    }
    

    //alphabets in order....
    int n;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        
        while(j<=i){
           
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        
        i=i+1;
    }


    //print space and star.
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/


    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        //print space(1st triangle).
        while(space){
            cout<<" ";
            space=space-1;
        }
        //print 2nd triangle.
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        //print third triangle.
        int start=i-1;
        while(start){
            cout<<start;
            start=start-1;
        }



        cout<<endl;
        i=i+1;
    }
    
   
}