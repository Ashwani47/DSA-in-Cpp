#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = nullptr;
    }
};

class stack{
    public:
    node* top;

    stack(){
        top = nullptr;
    }

    void push(int n){
        node* temp = new node(n);
        temp -> next = top;
        top = temp;
    }

    void pop(){
        if(top == nullptr) cout <<"Stack Underflow" << endl;
        else{
            node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek(){
        if(top == nullptr) {
            cout << "Stack is Empty";
            return -1;
        }
        else{
            return top -> data;
        }
    }

    bool isEmpty(){
        if(top == nullptr) return true;
        else return false;
    }

};

int main(){

    stack st;

    st.push(1);
    st.push(16);
    st.push(27);
    st.push(59);
    st.push(45);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    return 0;
}