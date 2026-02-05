#include<iostream>
using namespace std;

// // Q- find pivot in an array 

// int findPivot(int arr[], int n){
//     int s=0;
//     int e=n-1;
//     int m=s+(e-s)/2;

//     while(s<e){
//         if(arr[m]>=arr[0]){
//             s=m+1;
//         }
//         else e=m;
//         m=s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[100],n;
//     cout<<"enter the size of the array : ";
//     cin>>n;
//     cout<<"enter the array : ";
//     for(int i= 0;i< n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Pivot is at : "<<findPivot(arr,n);
//     return 0;
// }

// // leetcode - 33 & code 360 : search in a rotated sorted array
// int findPivot(vector<int>& arr, int n){
//     int s=0;
//     int e=n-1;
    

//     while(s<e){
//         int m=s+(e-s)/2;
//         if(arr[m]>=arr[0]){
//             s=m+1;
//         }
//         else e=m;
//     }
//     return s;
// }

// int binarySearch(vector<int>& arr,int s, int e, int target){

//     while(s<=e){
//         int m=s+(e-s)/2;
//         if(arr[m]==target) return m;
//         else if (arr[m]>target) e=m-1;
//         else s=m+1;
//     }
//     return -1;
// }

// int search(vector<int>& arr, int n, int k)
// {
//     int pi=findPivot(arr,n);
//     if(k>=arr[pi] && k<=arr[n-1]){
//         return binarySearch(arr,pi, n-1,k);
//     }
//     else{
//         return binarySearch(arr,0,pi-1,k);
//     }
// }


// // leetcode 69 : square root of a number using binary search 
// class Solution {
// public:
    // int mySqrt(int x) {
    //     int s=0;
    //     int e=x;
    //     if(x==0) return 0;
    //     else if(x==1) return 1;
    //     else{
    //         int ans=1;
    //         while(s<=e){
    //             int m=s+(e-s)/2;
    //             if(m<=x/m){
    //                 ans=m;
    //                 s=m+1;
    //             }
    //             else{
    //                 e=m-1;
    //             }
    //         }
    //         return ans;
    //     }
//     }
// };

// // Q :-  find the float part in the square root 

// int mySqrtInt(int x) {
//     int s=0;
//     int e=x;
//     if(x==0 || x==1) return x;
//     int ans=1;
//     while(s<=e){
//         int m=s+(e-s)/2;
//         if(m<=x/m){
//             ans=m;
//             s=m+1;
//         }
//         else e=m-1;
//     }
//     return ans;
// }
// double decimal(int n,int precisionCount, int intPart){

//     double factor=1;
//     double ans=intPart;
    
//     for(int i=0;i<precisionCount;i++){
//         factor = factor/10;
//         for(double j=ans;j*j<n;j=j+factor){
//             ans=j;
//         }
//     }
//     return ans;  
// }
// int main(){
//     int x;
//     cout<<"enter the number :";
//     cin>>x;
//     int intPart=mySqrtInt(x);
//     cout<<"Answer is :- "<<decimal(x,3,intPart);
//     return 0;
// }
