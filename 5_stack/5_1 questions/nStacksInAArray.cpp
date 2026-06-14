#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *top;
    int *next;
    int n, s;
    int freeSpot;
public:
    // constructor
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        // top initialize
        for(int i = 0; i < n; i++) {
            top[i] = -1;
        }
        // next initialize
        for (int i = 0; i < s; i++){
            next[i] = i+1;
        }
        next[s-1] = -1;
        // initialize freeSpot
        freeSpot = 0;
    }
    bool push(int x, int m)
    {
        // check for overflow
        if(freeSpot == -1) return false;
        int index = freeSpot;
        freeSpot = next[index];
        arr[index] = x;
        next[index] = top[m-1];
        top[m-1] = index;
        return true;

    }
    int pop(int m)
    {
        //check underflow
        if(top[m-1] == -1) return -1;

        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];

    }
};