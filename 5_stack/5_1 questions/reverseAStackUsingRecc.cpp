void pushAtBottom(stack<int>&stack, int x) 
{
    if(stack.empty()){
        stack.push(x);
        return;
    }
    int n = stack.top();
    stack.pop();
    pushAtBottom(stack, x);
    stack.push(n);
}

void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int x = stack.top();
    stack.pop();
    reverseStack(stack);
    pushAtBottom(stack,x);
}