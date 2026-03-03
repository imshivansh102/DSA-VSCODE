// //reverse an array

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void ReverseanArray(int arr[], int m){
//     int i=0;
//     int j=m-1;

//     while(i<j){
//         swap(arr[i++], arr[j--]);
//     }
// }
// int main(){

//     int arr[5]={1,2,3,4,5};
//     int size=5;

//     // int n;
//     // cout << "Enter sizze : " << endl;
//     // cin >> n;

//     // int arr[n];
//     // cout << "Array elements  : " << endl;
//     // for(int i=0; i<n; i++){
//     //     cin >> arr[i];
//     // }

//     ReverseanArray(arr, size);

//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){

//     map<int, string>m;

//     m[1]="Amit";
//     m[3]="Pratham";

//     cout<<m[3]<<endl;
//     m.insert({ 2, "Nikhil" });

//     cout<<m[2]<<endl;

//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<m.count(9)<<endl;// for finding

//     if(m.find(1) != m.end()){
//         cout<<"Found";
//     }

//     return 0;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;

// int main(){

//     string s="abc";

//     s.erase(1,1);

//     cout<<s <<endl;
//     cout<<s[0]<<endl;
//     cout<<s[1]<<endl;
//     cout<<s[2]<<endl;


//     return 0;
// }

#include<iostream>
using namespace std;

int powerOfTwo(int n ,int x){

    //BC.
    if(x==1){
        return 1;
    }
    int ans = 2 * powerOfTwo(2^(x-1),n);
    return ans;
}

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;

    if(powerOfTwo(n,x)==n){

        cout<< true<<endl;

    }
    else{
        cout<< false<<endl;
    }

    

}