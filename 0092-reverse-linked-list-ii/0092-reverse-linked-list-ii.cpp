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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //tc and sc = O(n)

        vector <int> ans;
        ListNode * temp = head;

        while(temp)
        {
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
        reverse(ans.begin() + left - 1 , ans.begin() + right );

        temp = head;
        int i = 0;

        while(temp)
        {
            temp -> val = ans[i];
            temp = temp -> next;
            i++;
        }
        return head;
    }
};