/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

int len(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != nullptr){
        length++;
        temp = temp -> next;
    }
    return length;
}

Node *findMiddle(Node *head) {
    // Approach 1 :- basic
    // int length = len(head);
    // for(int i = 0; i < length/2; i++){
    //     head = head -> next;
    // }
    // return head;

    // Aproach 2 :- fast and slow pointer
    Node* temp = head;
    while(temp != nullptr && temp -> next != nullptr){
        temp = temp -> next -> next;
        head = head -> next;
    }
    return head;

}

