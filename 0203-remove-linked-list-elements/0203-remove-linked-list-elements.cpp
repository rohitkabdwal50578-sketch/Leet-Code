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
    ListNode* removeElements(ListNode* head, int val) {

        // beginning
        while (head && head -> val == val)
         {
            ListNode * disconnect = head;
            head = head->next;
            delete disconnect;
        }

        // Remove from middle/end
        ListNode * current = head;

        while (current && current->next) 
        {
            if (current -> next -> val == val)
            {
                ListNode * disconnect = current->next;
                current->next = current->next->next;
                delete disconnect;
            }
            else 
                current = current->next;
        }
        return head;
    }
};

