#include <iostream>
using namespace std;

void update(int n){ // pass by value
    n++;
}
void update2(int &n){ // pass by reference
    n++;
}

int getSum(int* arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    // int i = 5;
    // // creating a reference variable
    // int &j = i;
    // cout << i << " " << j << endl;
    // i++;
    // j++;
    // cout << "i = " << i << endl << "j = " << j << endl;

    // int n = 5;
    // cout << "Before: " << n << endl;
    // update2(n);
    // cout << "After: " << n << endl;

    int n;
    cin >> n; 
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "Answer is :- " << ans << endl;

    return 0;
}