// // using map :-
// /*
// class Node {
//   public:
//     int data;
//     Node* next;
//     Node* random;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
//   private:
//     void insertAtTail(Node* &head, Node* &tail, int d){
//         Node* newNode = new Node(d);
//         if(head == nullptr){
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         tail -> next = newNode;
//         tail = newNode;
        
//     }
//   public:
//     Node* cloneLinkedList(Node* head) {
//         // step 1:- copy original into clone using next ptr
//         Node* cloneHead = nullptr;
//         Node* cloneTail = nullptr;
//         Node* temp = head;
//         while(temp != nullptr){
//             insertAtTail(cloneHead, cloneTail, temp -> data);
//             temp = temp -> next;
//         }
        
//         // step 2:- create a map
//         unordered_map<Node* , Node*> oldToNew;
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
//         while(originalNode != nullptr && cloneNode != nullptr){
//             oldToNew[originalNode] = cloneNode;
//             originalNode = originalNode -> next;
//             cloneNode = cloneNode -> next; 
//         }
        
//         // step 2.1:- arrange random pointers
//         originalNode = head;
//         cloneNode = cloneHead;
//         while(originalNode != nullptr){
//             cloneNode -> random = oldToNew[originalNode -> random];
//             originalNode = originalNode -> next;
//             cloneNode = cloneNode -> next; 
//         }
        
//         return cloneHead;
        
//     }
// };

// // --------------------------------------------------------

// // in O(1) space complexity and O(n) time complexity

// /*
// class Node {
//   public:
//     int data;
//     Node* next;
//     Node* random;

//     Node(int x) {
//         data = x;
//         next = NULL;
//         random = NULL;
//     }
// };
// */

// class Solution {
//   private:
//     void insertAtTail(Node* &head, Node* &tail, int d){
//         Node* newNode = new Node(d);
//         if(head == nullptr){
//             head = newNode;
//             tail = newNode;
//             return;
//         }
//         tail -> next = newNode;
//         tail = newNode;
        
//     }
//   public:
//     Node* cloneLinkedList(Node* head) {
//         // step 1:- copy original into clone using next ptr
//         Node* cloneHead = nullptr;
//         Node* cloneTail = nullptr;
//         Node* temp = head;
//         while(temp != nullptr){
//             insertAtTail(cloneHead, cloneTail, temp -> data);
//             temp = temp -> next;
//         }
        
//         // step 2 :- clone nodes add in between original list
//         Node* originalNode = head;
//         Node* cloneNode = cloneHead;
//         while(originalNode != nullptr && cloneNode != nullptr){
//             Node* aage = originalNode -> next;
//             originalNode -> next = cloneNode;
//             originalNode = aage;
            
//             aage = cloneNode -> next;
//             cloneNode -> next = originalNode;
//             cloneNode = aage;
//         }
        
//         // step 3 :- random pointers arrangement
//         temp = head;
//         while(temp != nullptr){
//             if(temp -> next != nullptr){
//                 temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;
//             }
//             temp = temp -> next -> next;
//         }
        
//         // step 4 :- revert changes made in step 2.
//         originalNode = head;
//         cloneNode = cloneHead;
//         while(originalNode != nullptr && cloneNode != nullptr){
//             originalNode -> next = cloneNode -> next;
//             originalNode = originalNode -> next;
            
//             if(originalNode != nullptr){
//                 cloneNode->next = originalNode -> next;
//             }
//             cloneNode = cloneNode -> next;
//         }
        
        
//         return cloneHead;
        
//     }
// };