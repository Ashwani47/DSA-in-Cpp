// Leetcode :- 25 Reverse Nodes in K Groups

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return head;
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr){
            temp = temp->next;
            count++;
        }
        if(count < k) return head;
        ListNode* curr = head;
        ListNode* back = nullptr;
        ListNode* front = nullptr;
        count = 0;
        while(curr != nullptr && count < k){
            front = curr->next;
            curr->next = back;
            back = curr;
            curr = front;
            count++;
        }
        if(front != nullptr) head->next = reverseKGroup(curr, k);
        return back;
    }
};