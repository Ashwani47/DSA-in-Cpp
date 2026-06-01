#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    if(myStack.empty()){
        myStack.push(x);
        return myStack;
    }
    int n = myStack.top();
    myStack.pop();
    pushAtBottom(myStack, x);
    myStack.push(n);
    return myStack;
}