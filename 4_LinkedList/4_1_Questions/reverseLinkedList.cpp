#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev){
    // base case
    if(curr == nullptr){
        head = prev;
        return;
    }
    reverse(head, curr -> next, curr);
    curr -> next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // // brute force
    // vector<int> arr;
    // LinkedListNode<int>* temp = head;
    // while(temp != nullptr){
    //     int x = temp -> data;
    //     arr.push_back(x);
    //     temp = temp -> next;
    // }
    // reverse(arr.begin(), arr.end());
    // LinkedListNode<int>* temp2 = head;
    // int i = 0;
    // while(temp2 != nullptr){
    //     temp2 -> data = arr[i];
    //     temp2 = temp2 -> next;
    //     i++;
    // }

    // // Approach 2
    // if(head == nullptr || head -> next == nullptr){
    //     return head;
    // }
    // LinkedListNode<int>* pichhala = nullptr;
    // LinkedListNode<int>* curr = head;
    // LinkedListNode<int>* agla = nullptr;
    // while(curr != nullptr){
    //     agla = curr -> next;
    //     curr -> next = pichhala;
    //     pichhala = curr;
    //     curr = agla;
    // }
    // return pichhala;

    // // Approach 3 -: reccursive approach
    // LinkedListNode<int>* curr = head;
    // LinkedListNode<int>* prev = nullptr;
    // reverse(head, curr, prev);

    // return head;

    // Another reccursive approach-:4
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    LinkedListNode<int>* newHead = reverseLinkedList(head -> next);
    head -> next -> next = head;
    head -> next = nullptr;
    return newHead;

}