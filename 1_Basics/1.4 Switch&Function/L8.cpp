// #include<iostream>
// using namespace std;

// // int main(){
// //     int n;
// //     cout<<"Enter a number : ";
// //     cin>>n;
// //     switch(n){
// //         case 1: cout<<"one";
// //                 break;
        
// //         case 2: cout<<"two";
// //                 break;

// //         default: cout<<"Default case";
        
// //     }
// // }

// // int main(){
// //     char ch;
// //     cin>>ch;
// //     switch(ch){
// //         case 'A' : cout<<"A for apple";
// //                     break;
// //         case 'B' : cout<<"B for boy";
// //                     break;
// //         default : cout<<"hmko nhi aata";
// //     }
// // }

// // **calculator**

// // int main(){
// //     int a,b;
// //     cout <<"enter operand a = ";
// //     cin>>a;
// //     cout<< "enter operand b = ";
// //     cin>>b;
// //     char ch;
// //     cout<<"enter the operator = ";
// //     cin>>ch;
// //     switch(ch){
// //         case '+' : cout<<"a+b="<<a+b;
// //                     break;
// //         case '-' : cout<<"a-b="<<a-b;
// //                     break;
// //         case '*' : cout<<"a*b="<<a*b;
// //                     break;
// //         case '/' : cout<<"a/b="<<a/b;
// //                     break;
// //         case '%' : cout<<"a%b="<<a%b;
// //                     break;
// //         default : cout<<"ERROR : Invalid Operator.";
// //     }
// // }


//             // **to count number of 100,50,20,1 rupee notes required for given x amount of money** 

// // int main(){
// //     int x;
// //     cout<<"enter the amount : ";
// //     cin>>x;
// //     int i=1;
// //     while(i<=4){
// //         switch(i){
// //             case 1 : if(x/100 !=0) {
// //                         cout<<"100 rupee notes required = "<<x/100 <<endl;
// //                         x=x%100;
// //                      }
// //                      break;

// //             case 2 :if(x/50 != 0){
// //                         cout<< "50 rupee notes required = "<<x/50 <<endl;
// //                         x=x%50;
// //                     }
// //                     break;

// //             case 3 :if(x/20 != 0){
// //                         cout<< "20 rupee notes required = "<<x/20 <<endl;
// //                         x=x%20;
// //                     }
// //                     break;

// //             case 4 :cout<<"1 rupee notes required = "<<x <<endl;
// //                     break;


// //         }
// //         i++;
// //     }
// // }

// // method 2 => more simpler

// // int main(){
// //     int x;
// //     cout<<"enter the amount : ";
// //     cin>>x;
// //     switch(1){
// //         case 1 : if(x/100 !=0) {
// //                     cout<<"100 rupee notes required = "<<x/100 <<endl;
// //                     x=x%100;
// //                     }

// //         case 2 :if(x/50 != 0){
// //                     cout<< "50 rupee notes required = "<<x/50 <<endl;
// //                     x=x%50;
// //                 }

// //         case 3 :if(x/20 != 0){
// //                     cout<< "20 rupee notes required = "<<x/20 <<endl;
// //                     x=x%20;
// //                 }

// //         case 4 :cout<<"1 rupee notes required = "<<x <<endl;
// //     }
// // }



                    // FUNCTIONS 



#include<iostream>
using namespace std;

// // power of a to b without function 
// int main(){
//     int a,b;
//     cin>> a >> b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout << ans;
// }

// // power of a to b using function
// int pow(int x,int y){ // function declaration
//     int ans=1;
//     for(int i=1;i<=y;i++){
//         ans=ans*x;
//     }
//     return ans;
// }

// int main(){
//     int a,b;
//     cin>> a >> b;
//     int apb = pow(a,b); // function call
//     cout<< apb;
// }

// // even or odd 
// bool isEven(int x){
//     if(x&1) return 1;
//     return 0;
// }
// int main(){
//     int a;
//     cin>>a;
//     int EoO = isEven(a);
//     if(EoO == 1) cout<<"odd";
//     else cout<<"Even";
// } 

// // to find nCr using function 
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int nCr (int n,int r){
//     return factorial(n)/(factorial(r)*factorial(n-r)) ;
// }
// int main(){
//     int n,r;
//     cout<<"enter n = ";
//     cin>>n;
//     cout<<"enter r = ";
//     cin>>r;
//     cout<<"nCr is = "<< nCr(n,r);
// }

// // prime or not using function 
// bool isPrime(int n){
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             return 0;
//             break;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int ans=isPrime(n);
//     if(ans==1){
//         cout<<n<<" is Prime.";
//     }
//     else{
//         cout<<n<<" is Composite.";
//     }
//     return 0;
// }

// // H.W. => total no of set bits(1) in a&b.

// void setBits(int n, int m){
//     int count=0;
//     while(n!=0 || m!=0){
//         if(n&1) count++;
//         if(m&1) count++;
//         m=m>>1;
//         n=n>>1;
//     }
//     cout<<count;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     setBits(a,b);
//     return 0;
// }

// // H.W. => Fibbonacci series using functions 

// void fibbonacci(int n){
//     if(n==1) cout<< "0 ";
//     if(n==2) cout<< "1 ";
//     int a=0,b=1,f;
//     for(int i=1;i<=n-2;i++){
//         f=a+b;
//         a=b;
//         b=f;
//     }
//     cout<<f;
// }
// int main(){
//     int a;
//     cout<<"Enter a number : ";
//     cin>>a;
//     fibbonacci(a);
//     return 0;
// }

