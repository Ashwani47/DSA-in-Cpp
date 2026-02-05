// #include<iostream>
// using namespace std;

// // bit wise operator
// int main(){
//     int a=4;
//     int b=6;

//     cout<<"a&b is :- "<< a&b <<endl ;
//     cout<<"a|b is :- "<< a|b <<endl ;
//     cout<<"~a is :- "<< ~a <<endl ;
//     cout<<"a^b is :- "<< a^b <<endl ;

// }

#include<iostream>
using namespace std;
//              method -1 for loop
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<i <<" ";
//     }
// }

//              method -2 for loop
int main(){
    int n;
    cin>>n;
    int i=1;
    for(;;){
        if(i<=n){
            cout<<i <<" ";
        }
        else{
            break;
        }
        i++;
    }
}