// // add two different LL

// class Solution {
//   public:
  
//     Node* reverse(Node* &head){
//         if(head == nullptr || head->next == nullptr) return head;
//         Node* newHead = reverse(head->next);
//         head->next->next = head;
//         head->next = nullptr;
//         return newHead;
//     }
    
//     void insertAtTail(Node* &head, Node* &tail, int val){
//         Node* temp = new Node(val);
//         if(head == nullptr){
//             head = temp;
//             tail = temp;
//             return ;
//         }
//         else{
//             tail -> next = temp;
//             tail = temp;
//         }
//     }
//     Node* add(Node* head1, Node* head2){
//         int carry = 0;
//         Node* ansHead = nullptr;
//         Node* ansTail = nullptr;
        
//         while(head1 != nullptr || head2 != nullptr || carry != 0){
//             int val1 = 0;
//             if(head1 != nullptr) val1 = head1 -> data;
            
//             int val2 = 0;
//             if(head2 != nullptr) val2 = head2 -> data;
            
//             int sum = carry + val1 + val2;
//             int digit = sum%10;
//             insertAtTail(ansHead, ansTail, digit);
//             carry = sum/10;
            
//             if(head1 != nullptr) head1 = head1 -> next;
//             if(head2 != nullptr) head2 = head2 -> next;
            
//         }
//         return ansHead;
        
//     }
    
//     Node* trim(Node* &ans){
//         while(ans->data == 0){
//             ans = ans->next;
//         }
//         return ans;
//     }
    
//     Node* addTwoLists(Node* head1, Node* head2) {
//         //step 1 :- reverse the LL
//         head1 = reverse(head1);
//         head2 = reverse(head2);
        
//         // step 2 :- add the data
//         Node* ans = add(head1, head2);
        
//         // step 3 :- reverse ans;
//         ans = reverse(ans);
        
//         // step 4 :- trim the extra 0's
//         ans = trim(ans);
        
//         return ans;
//     }
// };





// ----------------------- Add 1 in a LL

class Solution {
  public:
    Node* reverse(Node* &head){
        if(head == nullptr || head->next == nullptr) return head;
        Node* newHead = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }
    
    Node* addOne(Node* head) {
        head = reverse(head);
        
        Node* temp = head;
        int carry = 1;
    
        while(temp != nullptr){
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;
    
            if(carry == 0) break;
    
            if(temp->next == nullptr && carry > 0){
                temp->next = new Node(carry);
                carry = 0;
                break;
            }
    
            temp = temp->next;
        }
    
        head = reverse(head);
        return head;
    }
};