class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {

  public:
  Node *front;
  Node *rear;
    myQueue() {
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty() {
        if(front == nullptr) return true;
        return false;
    }

    void enqueue(int x) {
        Node *temp = new Node(x);
        if (isEmpty()) {
            front = temp;
            rear = temp;
            return;
        }
        rear -> next = temp;
        rear = temp;
    }

    void dequeue() {
        if(isEmpty()) return;
        front = front -> next;
    }

    int getFront() {
        if(isEmpty()) return -1;
        return front -> data; 
    }

    int size() {
        int count = 0;
        Node *temp = front;
        while(temp != nullptr){
            count ++;
            temp = temp -> next;
        }
        return count;
    }
};
