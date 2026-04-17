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

Node* sortList(Node *head){
    // int zeroCount = 0;
    // int oneCount = 0;
    // int twoCount = 0;

    // Node* temp = head;
    // while(temp != nullptr){
    //     if(temp->data == 0) zeroCount++;
    //     else if(temp->data == 1) oneCount++;
    //     else twoCount++;
    //     temp = temp->next;
    // }
    // temp = head;
    // while(temp != nullptr){
    //     if(zeroCount > 0){
    //         temp -> data = 0;
    //         zeroCount--;
    //     }
    //     else if(oneCount > 0){
    //         temp -> data = 1;
    //         oneCount--;
    //     }
    //     else if(twoCount > 0){
    //         temp -> data = 2;
    //         twoCount--;
    //     }
    //     temp = temp->next;
    // }
    // return head;


    // creating dummy nodes
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    // creating Sublists
    Node* temp = head;
    while(temp != nullptr){
        int val = temp -> data;
        if(val == 0){
            zeroTail -> next = temp;
            zeroTail = temp;
        }
        else if(val == 1){
            oneTail -> next = temp;
            oneTail = temp;
        }
        else if(val == 2){
            twoTail -> next = temp;
            twoTail = temp;
        }
        temp = temp->next;
    }

    // merge sublists
    if(oneHead -> next != nullptr){
        zeroTail -> next = oneHead -> next;
    }
    else{
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = nullptr;
    
    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}