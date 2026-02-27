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

#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int, string>m;

    m[1]="Amit";
    m[3]="Pratham";

    cout<<m[3]<<endl;
    m.insert({ 2, "Nikhil" });

    cout<<m[2]<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<m.count(9)<<endl;// for finding

    if(m.find(1) != m.end()){
        cout<<"Found";
    }

    return 0;

}