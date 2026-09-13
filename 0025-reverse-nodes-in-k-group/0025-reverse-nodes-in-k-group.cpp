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
        ListNode * previous = NULL;
        ListNode * current = head;

        //check for availability of k nodes
        ListNode* temp = head;
        for(int i = 0; i < k; i++)
        {
            if(temp == NULL)
                return head;

            temp = temp->next;
        }

        int count = 0;
        while(current && count < k)   //reverse first k nodes
        {
            ListNode *future = current -> next;
            current -> next = previous;
            previous = current;
            current = future;
            count ++;
        }

        if(current != NULL)
        {
            ListNode * newHead = reverseKGroup(current ,k);   //recursive call
            head -> next = newHead;
        }
        // previous reverse hue group ka new head
        return previous;




        
    }
};