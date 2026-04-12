#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/
bool isCircular(Node* head){
    if(head == NULL) return true;

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            Node* temp = slow;
            do{
                if(temp == head) return true;
                temp = temp->next;
            }while(temp != slow);

            return false;
        }
    }

    return false;
}