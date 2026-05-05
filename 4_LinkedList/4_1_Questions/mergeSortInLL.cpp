/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
node* findMid(node* head){
    node* slow = head;
    node* fast = head -> next;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

node* merge(node* left, node* right){
    if(left == nullptr) return right;
    if(right == nullptr) return left;

    node* ans = new node(-1);
    node* temp = ans;

    while(left != nullptr && right != nullptr){
        if(left -> data < right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    while(left != nullptr){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    while(right != nullptr){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    temp = ans -> next;
    ans -> next = nullptr;
    return temp;
}

node* mergeSort(node *head) {
    // base case
    if(head == nullptr || head -> next == nullptr){
        return head;
    }

    // split the LL ito two halves
    node* mid = findMid(head);
    node* left = head;
    node* right = mid -> next;
    mid -> next = nullptr;

    // recursive call to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left and right halves
    node* result = merge(left, right);

    return result;
}
