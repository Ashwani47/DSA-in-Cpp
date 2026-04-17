/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    Node* reverse(Node* head){
        if(head == nullptr || head->next == nullptr) return head;
        Node* newHead = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
    bool isPalindrome(Node *head) {
        if(head -> next == nullptr) return true;
        Node* slow = head;
        Node* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* secondHalf = reverse(slow);
        Node* temp = head;
        while(secondHalf != nullptr){
            if(secondHalf->data != temp->data) return false;
            secondHalf = secondHalf->next;
            temp = temp->next;
        }
        return true;
    }
    
};