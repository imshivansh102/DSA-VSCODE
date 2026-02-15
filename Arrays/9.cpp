//QUESTION PRACTICE




// find the unique element.

// #include<iostream>
// #include<vector>
// using namespace std;

// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans ;
// }

// int main(){

//     int n;
//     cout<<"Enter the size of Array"<<endl;
//     cin>>n;

//     vector<int>arr(n);
//     cout<<"Enter the elements"<<endl;

//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int uniqueElement=findUnique(arr);
//     cout<<"Unique Element is "<<uniqueElement;
//     return 0;
// }
//.....................................................................................................................

// Union of two Arrays with no duplicates.

// #include<iostream>
// #include<vector>
// using namespace std;



// int main(){
//     vector<int>ans;
//     int arr[5]={2,4,5,6,8};
//     int brr[4]={1,3,7,9};

//     cout<<"Insert the elements of first Array."<<endl;
//     for(int i=0;i<5;i++){
//         ans.push_back(arr[i]);
//     }

//     cout<<"Insert the elements of second Array."<<endl;
//     for(int i=0;i<4;i++){
//         ans.push_back(brr[i]);
//     }
//     cout <<"Print the Array."<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
    

//     return 0;

// }
// ....................................................................................................................

// Intersection of two Arrays.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main (){

//     int arr[]={1,3,5,7,9};
//     int brr[]={5,7,9};

//     int sizearr=5;
//     int sizebrr=3;

//     int Element1=0;   

//     for(int i=0;i<sizearr;i++){ 
//         Element1=arr[i];
//         for(int j=0;j<sizebrr;j++){
//             if(brr[j]==Element1){
//                 cout<<"Element is:"<< Element1 << endl;
                
//             }   
           
//         }
//     }

// }
// ..................................................................................................................

// Intersection of two arrays using vector.

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int main (){

//     vector<int>arr{1,2,3,5,7,8,9,9};
//     vector<int>brr{5,9,9,4};
//     vector<int>ans;

//     int Element1=0;
    
//     for(int i=0;i<arr.size();i++){
//         Element1=arr[i];
//         for(int j=0;j<brr.size();j++){
//             if(brr[j]==Element1){
//                 ans.push_back(brr[j]);
//                 // Mark the common element otherwise it creates problem for same elements in array.
//                 brr[j]=INT_MIN;
//             }   
           
//         }
//     }
//     cout<<"Common elements are:"<<endl;
//     for(auto value: ans) {
//         cout<< value << " ";
//     }

//     return 0;

// }
// ..................................................................................................................

// WAP to find ncr.

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n,int r){
//     int numerator=factorial(n);
//     int denominator=factorial(r)*factorial(n-r);

//     return numerator/denominator;
// } 

// int main(){

//     int n;
//     int r;
//     cin>>n>>r;
//     cout<<"Answer is :"<<nCr(n,r)<<endl;
   
// }
//.....................................................................................................................

// find target element using Linear search.

// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[],int size,int key){

//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[6]={2,4,8,3,6,9};
//     int size=6;
//     int key;
//     cout<<"Enter key to find:"<<endl;
//     cin>>key;

//     if(linearSearch(arr,size,key)){
//         cout<<"Found "<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
// }
//....................................................................................................................

// find maximum number in arrray.

#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={2,3,6,7,8,5,32,45,89,23,21,1};
    int size=12;
    int maxi=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i]; // store the value.
        }
    }
    cout<<"maximum number is:"<<maxi<<endl;
}

