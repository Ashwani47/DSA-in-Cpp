#include<iostream>
#include<stack>

using namespace std;

int main(){
    
    // creation of stack
    stack<int> st;
    
    // push operation
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // is empty?
    cout << "is stack empty? " << st.empty() << endl;

    // size
    cout << "no. of elements in stack are :- " << st.size() << endl;

    // pop and peek
    while(!st.empty()){
        cout << "current top is:- " << st.top() << endl;
        st.pop();
    }

    return 0;
}