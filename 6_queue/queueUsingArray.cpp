#include <bits/stdc++.h> 
class Queue {
public:
    int *arr;
    int size;
    int start;
    int rear;
    Queue() {
        // since size is not given then we are going to assign it by ourself , very large
        size = 100001;
        arr = new int[size];
        start = 0;
        rear = 0;
    }

    bool isEmpty() {
        if(start == rear) return 1;
        else return 0;
    }

    void enqueue(int data) {
        if(rear == size) cout << "Queue is Full" << endl;
        else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(start == rear)
            return -1;
        else{
            int ans = arr[start];
            arr[start] = -1;
            start++;
            if(start == rear){
                start = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
        if(start == rear) return -1;
        else return arr[start];
    }
};