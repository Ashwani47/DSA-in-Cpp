
#include <iostream>
using namespace std;

// node structure
class Node{
    public :
        int data;
        Node* prev;
        Node* next;
        Node(int data){
            this -> data = data;
            this -> prev = NULL;
            this -> next = NULL;
        }
};

// traversal
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// gives you the length
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

// insert at head
void insertAtHead(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);
    //safety check
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

// insert at Tail
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);
    if(tail == NULL){
        tail = temp;
        head = temp;
    }
    else{ 
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

// insert at position 
void insertAtPosition(Node* &head, Node* &tail, int pos, int val){
    // insert at head
    if(pos == 1){
        insertAtHead(head, tail, val);
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos-1; i++){
        temp = temp -> next;
    }
    //insert at tail
    if(temp -> next == NULL){
        insertAtTail(head, tail, val);
        return;
    }
    // insert at middle
    else{ 
        Node* yoo = new Node(val);
        yoo -> next = temp -> next;
        yoo -> prev = temp;
        temp -> next -> prev = yoo;
        temp->next = yoo; 
    }
}

// delete from position
void deleteFromPos(Node* &head, Node* &tail, int pos){
    // delete at head
    if(pos == 1){
        Node* temp = head;
        if(head == tail){       // single node
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }
        head = head -> next;
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
        return;
    }
    // traverse to position
    Node* curr = head;
    Node* previous = NULL;
    for(int i = 1; i < pos; i++){
        previous = curr;
        curr = curr -> next;
        if(curr == NULL) return;  // out of bounds guard
    }
    // delete at tail
    if(curr -> next == NULL){
        previous -> next = NULL;
        tail = previous;
        delete curr;
        return;
    }
    // delete at middle
    previous -> next = curr -> next;
    curr -> next -> prev = previous;
    curr -> next = NULL;
    delete curr;
}

// driver code
int main(){

    Node* head = new Node(10);
    Node* tail = head;
    print(head);
    cout << "Length is :- " << getLength(head) << endl;

    cout << "Insertinng at Head :- " << endl;
    insertAtHead(head, tail, 15);
    print(head);
    cout << "Updated Length is :- " << getLength(head) << endl;

    cout << "Inserting at Tail :- " << endl;
    insertAtTail(head, tail, 99);
    print(head);
    cout << "Updated Length is :- " << getLength(head) << endl;

    cout << "Insertinng at position :- " << endl;
    insertAtPosition(head, tail, 4, 100);
    print(head);
    cout << "Updated Length is :- " << getLength(head) << endl;

    cout << "My current DLL is :- " ;
    print(head);
    cout << "Current length is :- " << getLength(head) << endl;

    cout << "Deleting a 4th node. " << endl;
    deleteFromPos(head, tail, 4);
    cout << "Updated DLL is :- ";
    print(head);
    cout << "new Length is :- " << getLength(head);

    return 0;
}