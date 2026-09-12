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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp -> next;
        }
        count-=n;
        //edge case - when n= 5 then (count ==0)
        if(count == 0)
        {
            ListNode *temp = head;
            head = head -> next;
            delete temp;
            return head;
        }


        ListNode *previous = NULL,*current = head;
        while(count--)
        {
            previous = current;
            current = current -> next;
        }

        previous -> next = current -> next;
        delete current;

        return head;


        
    }
};