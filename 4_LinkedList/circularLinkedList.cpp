#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(Node* &tail, int val) {
    Node* temp = new Node(val);
    temp->next = tail->next;
    tail->next = temp;
}

void insertAtTail(Node* &tail, int val) {
    Node* temp = new Node(val);
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, int val, int pos) {
    if (pos == 1) { insertAtHead(tail, val); return; }
    Node* curr = tail->next;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
        if (curr == tail->next) { insertAtTail(tail, val); return; }
    }
    if (curr == tail) { insertAtTail(tail, val); return; }
    Node* newNode = new Node(val);
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteAtPosition(Node* &tail, int pos) {
    if (tail == nullptr) { cout << "List is empty\n"; return; }

    // single node
    if (tail->next == tail) {
        delete tail;
        tail = nullptr;
        return;
    }

    // delete head (pos == 1)
    if (pos == 1) {
        Node* head = tail->next;
        tail->next = head->next;
        delete head;
        return;
    }

    // traverse to (pos-1)th node
    Node* curr = tail->next;
    for (int i = 1; i < pos - 1; i++) {
        curr = curr->next;
        if (curr->next == tail->next) { cout << "Position out of range\n"; return; }
    }

    Node* toDelete = curr->next;

    // deleting tail
    if (toDelete == tail) tail = curr;

    curr->next = toDelete->next;
    delete toDelete;
}

void printList(Node* tail) {
    if (!tail) { cout << "List is empty\n"; return; }
    Node* curr = tail->next;
    while (curr != tail) { cout << curr->data << " -> "; curr = curr->next; }
    cout << tail->data << " -> (head: " << tail->next->data << ")\n";
}

int main() {
    Node* tail = new Node(10);
    tail->next = tail;
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);

    cout << "Initial:           "; printList(tail);

    deleteAtPosition(tail, 1);
    cout << "Delete pos 1:      "; printList(tail);

    deleteAtPosition(tail, 2);
    cout << "Delete pos 2:      "; printList(tail);

    deleteAtPosition(tail, 3);  // tail
    cout << "Delete pos 3:      "; printList(tail);

    deleteAtPosition(tail, 10); // out of range
    cout << "Delete pos 10:     "; printList(tail);

    return 0;
}