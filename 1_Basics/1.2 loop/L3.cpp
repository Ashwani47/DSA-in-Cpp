#include <iostream>
using namespace std;

// int main (){
//     char yoo;
//     cout << "enter a charachter : " ;
//     cin >> yoo;
//     if(yoo>='a' && yoo<='z'){
//         cout << "lowercase character entered";
//     }
//     else if(yoo>='A' && yoo<='Z'){
//         cout << "uppercase character enterd";
//     }
//     else if(yoo>='0' && yoo<='9'){
//         cout << "number has been enterd";
//     }
//     else {
//         cout << "some special charachters are enterd ";
//     }

// }

// int main() {
//     int n;
//     cout << "enter a number : ";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         cout << i <<" " ;
//         i++;
//     }
// }


// // sum of natural numbers 

// int main (){
//     int n;
//     cout << " enter a number : ";
//     cin >> n;
//     int i=1,sum=0;
//     while (i<=n){
//         sum = sum + i;
//         i++;
//     }
//     cout << sum;
// }

// //H.W sum of all even natural numbers

// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int i=1,sum=0;
//     while(i<=n){
//         if(i%2==0){
//             sum=sum+i;
//         }
//         i++;
//     }
//     cout<<"the sum of even natural numbers is : " << sum;
// }

// // prime or not

// int main (){
//     int n;
//     cout << "enter a number : ";
//     cin>>n;
//     int flag =0,i=2;
//     while(i<n){
//         if(n%i==0){
//             flag=1;
//             break;
//         }
//         i++;
//     }
//     if(flag==1){
//         cout<< "composite number";
//     }
//     else{
//         cout<<"prime number";
//     }
// }

// // pattern -
// // * * * *
// // * * * *
// // * * * *
// // * * * *
// int main(){
//     int n;
//     cout<<"enter a nummber : ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// // pattern - 
// // 1 1 1 1
// // 2 2 2 2
// // 3 3 3 3
// // 4 4 4 4
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout << i <<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }