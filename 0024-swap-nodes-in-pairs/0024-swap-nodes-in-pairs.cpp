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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;

        ListNode * secondnode = head -> next;
        head -> next = swapPairs(secondnode -> next); //2nd ke baad wale recursively swap
        
        secondnode -> next = head;   //reverse link between 1 and 2nd node
        return secondnode;
        
        
    }
};