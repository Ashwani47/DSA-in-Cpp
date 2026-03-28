#include <iostream>
using namespace std;

// // implementation of a node
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };
// int main(){
//     Node* yoo = new Node(5);
//     cout << yoo -> data << endl;
//     cout << yoo -> next << endl;
//     return 0;
// }

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void print(Node* &head){
    if(head == NULL){
        cout << "LINKED LIST is empty !!!" << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtHead(Node* &head, int val){
    Node* node = new Node(val);
    node -> next = head;
    head = node;
}

void insertAtTail(Node* &head, int val){
    Node* node = new Node(val);

    // Empty check
    if(head == NULL){
        head = node;
        return;
    }

    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = node;
}

void insertAtPos(Node* &head, int pos, int val){
    if(pos == 1){
        insertAtHead(head, val);
        return;
    }
    Node* node = new Node(val);
    Node* temp = head;
    for(int i = 1; i < pos-1; i++){
        temp = temp -> next;
    }
    node -> next = temp -> next;
    temp -> next = node;
}

void deleteFromPos(Node* &head, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head -> next;

        // to free the memory from heap;
        delete temp;

        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    for(int i = 1; i < pos; i++){
        prev = curr;
        curr = curr -> next;
    }
    
    prev -> next = curr -> next;
    delete curr;
}

int main(){

    Node* head = NULL;
    // print(head);

    // Node* head = NULL;
    // Node* yoo1 = new Node(5);
    // head = yoo1;
    // Node* yoo2 = new Node(10);
    // yoo1 -> next = yoo2;

    // or

    // Node* head = new Node(5);
    // Node* yoo2 = new Node(10);
    // head -> next = yoo2;

    // insertion at head---->
    insertAtHead(head, 10);
    insertAtHead(head, 5);
    insertAtHead(head, 2);

    // insertion at tail ------->
    insertAtTail(head, 25);


    // insertion at position
    insertAtPos(head, 5, 99);

    // deletion
    deleteFromPos(head, 1);



    print(head);
    return 0;
}

