class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0);

        ListNode* lptr = left;
        ListNode* rptr = right;

        ListNode* temp = head;

        while (temp) {
            ListNode* nextnode = temp->next;

            if (temp->val < x) 
            {
                lptr -> next = temp;
                lptr = lptr -> next;
            } 
            
            else
             {
                rptr -> next = temp;
                rptr = rptr -> next;
            }

            temp = nextnode;
        }

        rptr->next = NULL;

        lptr->next = right->next;

        return left->next;
    }
};
