#include <iostream>

using namespace std;

void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    p = p +1;
}

int main() {
    
    int arr[10] = {0,1,2,3,4,5,6,7,8,9}; 
    // // via base address.
    // cout << arr << endl;
    // // using adress of operator.
    // cout << &arr[0] << endl;

    // cout << *arr << endl;

    // cout << *(arr+1) << endl;

    // // yooooooo....
    // cout << "arr[2] = " << *(arr + 2) << endl;
    // cout << "\t or" << endl;
    // cout << "arr[2] = " << 2[arr] << endl;

    // cout << arr << endl;
    // cout << &arr << endl;

    char ch[6] = "abcde";
    // cout << ch << endl; // prints entire string.
    // char *ptr = &ch[0];
    // cout << ptr << endl; // prints entire string.

    int val = 5;
    int *ptr = &val;
    print(ptr);
    cout << "Before :- " << ptr << endl;
    update(ptr);
    cout << "After :- " << ptr;

    return 0;
}