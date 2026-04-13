//  // remove duplicates from sorted singlly LL :-LEETcode - 83


// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* curr = head;
//         while(curr != nullptr && curr->next != nullptr){
//             if(curr->val == curr->next->val){
//                 curr->next = curr->next->next;
//             }
//             else{
//                 curr = curr->next;
//             }
//         }
//         return head;
//     }
// };

// ------------------------------

// // LEETCODE :- 82 Remove Duplicates from Sorted List II


// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         ListNode* dummy = new ListNode(0);
//         ListNode* curr = dummy; 
//         ListNode* temp = head; 

//         while(temp != nullptr){
//             if(temp->next != nullptr && temp->val == temp->next->val){
                
//                 int val = temp->val;
//                 while(temp != nullptr && temp->val == val){
//                     temp = temp->next;
//                 }
//             }
//             else{
//                 curr->next = temp;
//                 curr = curr->next;
//                 temp = temp->next;
//                 curr->next = nullptr;
//             }
//         }

//         return dummy->next;
//     }
// };

// ------------------------------------

// // remove duplicates from sorted doubly linkedlist

// Node * removeDuplicates(Node *head)
// {
//     Node* curr = head;

//     while(curr != nullptr && curr->next != nullptr){
//         if(curr->data == curr->next->data){

//             Node* temp = curr->next;

//             curr->next = temp->next;

//             if(temp->next != nullptr){
//                 temp->next->prev = curr;
//             }

//         }
//         else{
//             curr = curr->next;
//         }
//     }
//     return head;
// }


// ------------------ 

// // remove duplicates from unsorted doubly linked list

// Node *removeDuplicates(Node *head)
// {
//     Node* curr = head;

//     while(curr != nullptr){
//         Node* temp = curr;

//         while(temp->next != nullptr){
//             if(temp->next->data == curr->data){
//                 Node* dup = temp->next;
//                 temp->next = temp->next->next;
//                 delete dup;
//             }
//             else{
//                 temp = temp->next;
//             }
//         }

//         curr = curr->next;
//     }

//     return head;
// }