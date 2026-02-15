// find index of target using binary search.

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;

//     while(start<=end){
//         int element=arr[mid];
//         if(element==target){
//            return mid;
//         }
//         if(element<target){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
        
//     }
//     return -1;

// }
// int main(){

//     int arr[]={1,3,5,7,9,10,15,17,19,21,23,27};
//     int size=12;
//     int target=21;

//     int indexoftarget=binarySearch(arr,size,target);

//     if(indexoftarget==-1){
//         cout<<"target not found"<<endl;
//     }
//     else{
//         cout<<"target found at "<<indexoftarget<<" index."<<endl;
//     }

//     return 0;

// }
//...................................................................................................................

// find the first occurence of elements.

// #include<iostream>
// #include<vector>
// using namespace std;

// int firstOccurence(vector<int>arr,int target){
//     int start=0;
//     int end=arr.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if(arr[mid]==target){ // store the answer and search left side of array.
//             ans=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]>target){ // serach left side of array.
//             end=mid-1;
//         }
//         else if(arr[mid]<target){ // search right side of array.
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }

//     return ans;

// }

// int main(){
//     vector<int>arr{1,3,5,5,5,5,5,5,6,7,9};
//     int target=5;

//     int targetElement=firstOccurence(arr,target);
//     cout<<"target index is "<<targetElement<<" index."<<endl;

//     return 0;

// }
//...................................................................................................................

// find the last occurence of target element.

// #include<iostream>
// #include<vector>
// using namespace std;

// int lastOccurence(vector<int>arr,int target){
//     int start=0;
//     int end=arr.size()-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end){
//         if(arr[mid]==target){ // store the answer and search right side of array.
//             ans=mid;
//             start=mid+1;
//         }
//         else if(arr[mid]>target){ 
//             end=mid-1;
//         }
//         else if(arr[mid]<target){ 
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }

//     return ans;

// }

// int main(){
//     vector<int>arr{1,3,5,5,5,5,5,5,5,6,7,9};
//     int target=5;

//     int targetElement=lastOccurence(arr,target);
//     cout<<"target index is "<<targetElement<<" index."<<endl;

//     return 0;

// }
//....................................................................................................................

// find square root of a number.

// #include<iostream>
// using namespace std;

// // there is other ways as well but this is best way to solve.

// int squareRootofElement(int target) {
//     int start = 0;
//     int end = target; // Binary search range should be 0 to target.
//     int ans = -1;
//     int mid = start + (end - start) / 2;

//     while (start <= end) {

//         if (mid * mid == target) {
//             return mid;
//         }
//         else if (mid * mid > target) { 
//             end = mid - 1;
//         }
//         else {
//             ans = mid;
//             start = mid + 1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }
// int main() {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int target=n;

//     int result = squareRootofElement(target);
//     cout << "square root is " << result << endl;
//     return 0;
// }

//......................................................................................................................

// square root of number upto decimal or fractional values.

// #include<iostream>
// using namespace std;

// int squareRootofElement(int target) {
//     int start = 0;
//     int end = target; // Binary search range should be 0 to target.
//     int ans = -1;
//     int mid = start + (end - start) / 2;

//     while (start <= end) {

//         if (mid * mid == target) {
//             return mid;
//         }
//         else if (mid * mid > target) { 
//             end = mid - 1;
//         }
//         else {
//             ans = mid;
//             start = mid + 1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return ans;
// }
// int main() {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     int target=n;

//     int result = squareRootofElement(target);
//     cout << "square root is " << result << endl;

//     int Precision;
//     cout<< "Enter the no.of precise value after interger value."<<endl;
//     cin>>Precision;
//     double step=0.1;
//     double finalans=result;

//     for(int i=0;i<Precision;i++){

//         for(double j=finalans; j*j<=n; j=j+step){
//             finalans=j;
//         }
//         step=step/10;
//     }
//     cout<<"Final answer is "<<finalans<<endl;

//     return 0;
// }
// ......................................................................................................................

// Binary search in 2D matrix or array.
// Search target element in 2D array.

// #include<iostream>
// using namespace std;

// // In 2D array only 1st bracket should empty rest all should filled.

// bool binarySearch2Darray(int arr[][4],int target,int rows,int cols){
//     int start=0;
//     int end=rows*cols-1;
//     int mid=start+(end-start)/2;
    
//     while(start<=end){
//         int rowindex=mid/cols;
//         int colsindex=mid%cols;

//         if(arr[rowindex][colsindex]==target){
//             return true;
//         }
//         else if(arr[rowindex][colsindex]>target){
//             end=mid-1; // search on the left side of array. 
//         }
//         else if(arr[rowindex][colsindex]<target){
//             start=mid+1; // Search on the right side of array.
//         }
//         mid=start+(end-start)/2;
//     }
    
//     return false; // Element not found.
// } 


// int main(){

//     int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
//     int rows=5;
//     int cols=4;
//     int target;
//     cout<<"Enter the input target element."<<endl;
//     cin>>target;

//     bool ans=binarySearch2Darray(arr,target,rows,cols);

//     if(ans){
//         cout<<"found"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }

//     return 0;

// }
//..................................................................................................................

// Binary search in nearly sorted array.

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int>arr,int target){
//     int start=0;
//     int end=arr.size()-1;
//     int mid=start+(end-start)/2;

//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(arr[mid+1]<arr.size() && arr[mid+1]==target){
//             return mid+1;
//         }
//         if(arr[mid-1]>0 && arr[mid-1]==target){
//             return mid-1;
//         }
//         if(arr[mid]>target){
//             end=mid-1;
//         }
//         if(arr[mid]<target){
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
    
//     return -1;

// }


// int main(){

//     vector<int>arr{10,3,40,20,50,80,70};
//     int target;
//     cout<<"Enter the input target Element:"<<endl;
//     cin>>target;

//     int ans=binarySearch(arr,target);
//     cout<<"The target index is:"<<ans<<endl;

//     return 0;

// }
//.....................................................................................................................

// Divide two numbers and find quotient using binary Search.(either positive or negative no.)

// #include<iostream>
// using namespace std;

// int findQuotient(int dividend,int divisor){
//     int s=0;
//     int e=abs(dividend);
//     int mid=s+(e-s)/2;
//     int ans=0;

//     while(s<=e){
//         if(abs(mid*divisor)==abs(dividend)){ // we got perfect solution.
//             ans=mid;
//             break;
//         }
//         else if(abs(mid*divisor)>abs(dividend)){ // left search.
//             e=mid-1;
//         }
//         else{ // right search.
//             ans=mid;
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;

//     }
//     if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
//         return ans;
//     }
//     else{
//         return -ans;
//     }

// }

// int main(){
//     int dividend=78;
//     int divisor=7;

//     int result=findQuotient(dividend,divisor);

//     cout<<result;
//     return 0;

// }
//.....................................................................................................................

// find the odd occuring element in array.

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(s==e){ // when there is only single element.
            return s; 
        }
        // when mid is even or odd.
        if(mid%2==0){ // when mid is even.
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{ // when mid is odd.
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }    
        mid=s+(e-s)/2;
    }
    
    return -1;

}

int main(){
    vector<int>arr{1,1,2,2,5,5,7,8,8,9,9};
    int ans=solve(arr);

    cout<<"index is:"<<ans<<endl;
    cout<<"ans is:"<<arr[ans];

    return 0;
}


