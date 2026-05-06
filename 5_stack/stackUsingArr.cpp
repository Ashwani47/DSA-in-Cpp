#include<iostream>
using namespace std;

class stack{
    public:
    // properties (data members)
    int *arr;
    int top;
    int size;

    // behaviour (methods)
    // constructor
    stack(int size){
        this -> size = size; // user provided size
        arr = new int[size]; // creating dynamic array
        top = -1; // initialization of top 
    }

    //push
    void push(int n){
        if(size - top > 1){
            top++;
            arr[top] = n;
        }
        else{
            cout <<  "Stack Overflow" << endl;
        }
    }
    //pop
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack Underflow" << endl;
        }
    }
    //peek
    int peek(){
        if(top >= 0) return arr[top];
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
    //isEmpty?
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

};

int main(){

    stack st(5);

    st.push(99);
    st.push(42);
    st.push(56);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();

    if(st.isEmpty()) cout << "Empty";
    else cout << "Not empty";


    return 0;
}