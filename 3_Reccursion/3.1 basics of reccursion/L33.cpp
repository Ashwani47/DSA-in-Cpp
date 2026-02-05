#include <iostream>
using namespace std;

// check if array is sorted or not using reccursion
bool isSorted(int arr[], int n){
    if(n == 0 || n == 1) return true;
    if(arr[n] > arr[n-1]) return isSorted(arr, n-1);
    else return false;
}

// sum of array using reccursion
int sumOfArr(int arr[], int n){
    if(n == 0) return 0;
    return arr[n-1] + sumOfArr(arr, n-1);
}

// linear search using reccursion
bool linearSearch(int arr[], int n, int target){
    if(n == 0) return false;
    if(target == arr[n-1]) return true;
    else return linearSearch(arr, n-1, target);
}

// Binary search using reccursion
bool binarySearch(int arr[], int s, int e, int key){
    int m = s+(e-s)/2;
    if(s>e) return false;
    if(arr[m] == key) return true;
    else if(arr[m] > key) return binarySearch(arr, s, m-1, key); 
    else return binarySearch(arr, m+1, e, key); 
}

// Driver code
int main(){

    int n;
    cin >> n;
    int *arr= new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // if(isSorted(arr, n)) cout << "Yes, Array is sorted";
    // else cout << "No, Array is not in sorted order";

    // int sum = sumOfArr(arr, n);
    // cout << "Sum of the array is :- " << sum;

    int key;
    cin >> key;

    // if(linearSearch(arr, n, key)) cout << "Found.";
    // else cout << "Not Found.";

    if(binarySearch(arr, 0, n-1, key)) cout << "Found.";
    else cout << "Not Found.";

    return 0;
}