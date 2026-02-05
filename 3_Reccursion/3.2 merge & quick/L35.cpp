#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){

    int m = s+(e-s)/2;

    int len1 = m - s + 1;
    int len2 = e - m;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    // mainArrayIndex = m+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted arrays
    int i1 = 0;
    int i2 = 0;
    mainArrayIndex = s;

    while(i1 < len1 && i2 < len2){
        if(first[i1] < second[i2]){
            arr[mainArrayIndex++] = first[i1++];
        }
        else{
            arr[mainArrayIndex++] = second[i2++];
        }
    }
    while(i1 < len1){
        arr[mainArrayIndex++] = first[i1++];
    }
    while(i2 < len2){
        arr[mainArrayIndex++] = second[i2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int arr[], int s, int e){

    //base case
    if(s>=e) return;

    int m = s+(e-s)/2;

    //sort left part
    mergeSort(arr, s, m);

    // sort right part
    mergeSort(arr, m+1, e);

    // merge both parts
    merge(arr, s, e);
}

// HW :- count inversions of an array from GFG.


int main(){

    int n;
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array :- ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);

    cout << "The sorted array is :- ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    delete []arr;

    return 0;
}