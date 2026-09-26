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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;

        int n = 0;
        ListNode * tail = head;
        while(tail -> next)
        {
            n ++;
            tail = tail -> next;
        }
        n++;    //count last node
        
        k = k % n;   //edge case

        if(k == 0)
            return head;

        tail -> next = head;        //last node point to first node

        //traverse t0 n-k nodes

        ListNode * temp = head;
        for(int i = 1; i < n-k ;i++)
            temp = temp -> next;
        //now temp is pointing to n-k node

        ListNode * newHead = temp -> next;
        temp -> next = NULL;
        return newHead;
        
    }
};