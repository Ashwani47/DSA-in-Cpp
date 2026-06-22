#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;

    // push operation
    q.push(1);
    q.push(2);
    q.push(3);

    // access front and back elements
    cout << "Front element: " << q.front() << endl; // 1
    cout << "Back element: " << q.back() << endl; // 3

    // pop operation
    q.pop(); // removes 1

    cout << "Front element after pop: " << q.front() << endl; // 2

    //size of queue
    cout << "Size of queue: " << q.size() << endl; // 2

    // check if queue is empty
    if(q.empty()){
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // update front element
    q.front() = 10; // updates front element to 10
    cout << "Front element after update: " << q.front() << endl; // 10

    return 0;
}