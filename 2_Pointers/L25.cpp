#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int num = 5;
    cout << "Num = " << num << endl;

    // // address of operator
    // cout << "Address of num is :- " << &num ;

    int *ptr = &num;
    cout << ptr;

    return 0;
}