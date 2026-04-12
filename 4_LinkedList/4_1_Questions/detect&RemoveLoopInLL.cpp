/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

Node* isLoop(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return slow;
    }
    return nullptr;
}

Node *removeLoop(Node *head)
{
    if(isLoop(head) == nullptr) return head;
    Node* slow = isLoop(head); // we got the meeting point

    //but we have to find the starting point of the loop.
    Node* ptr = head;
    while(ptr != slow){
        slow = slow->next;
        ptr = ptr->next;
    }


    Node* temp = isLoop(head);
    while(temp->next != slow){
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;


}