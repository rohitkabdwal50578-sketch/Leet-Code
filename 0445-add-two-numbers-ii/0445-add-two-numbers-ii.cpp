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
// reversee linked list using ptr
    ListNode * reverse(ListNode * head)
    {
        ListNode * current = head;
        ListNode * previous  = NULL;
        ListNode * future  = NULL;
        while(current)
        {
            future  = current -> next;
            current -> next = previous ;
            previous = current;
            current = future;
        }
        head = previous;
        return head;
    }
    //using recursion
    // ListNode* reverse(ListNode* head)
    // {
    //     if(head == NULL || head->next == NULL)
    //         return head;

    //     ListNode* last = reverse(head->next);

    //     head->next->next = head;
    //     head->next = NULL;

    //     return last;
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry =  0;
        int sum = 0;

        ListNode * ans = new ListNode();
        while(l1 || l2 || carry)
        {
            if(l1 != NULL)
            {
                sum += l1 -> val;
                l1  = l1 -> next;
            }
            
            if(l2 != NULL)
            {
                sum += l2 -> val;
                l2  = l2 -> next;
            }

            ans -> val = sum % 10;
            carry = sum / 10;


            ListNode * newnode = new ListNode();
            newnode -> next = ans;
            ans = newnode;
            sum = carry;
        }
        if(carry == 0)  
            return ans -> next;
        return ans;
    }
};