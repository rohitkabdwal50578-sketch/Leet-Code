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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * first = NULL;
        ListNode * last = list1;

        for(auto i = 0; i<b + 1;i++)     //i<=b+1 nahi ayega kyuki lst = lst-> next kra h
        {
            if(i == a-1)
                first = last;

            last = last -> next;
        }
        //now connect
        first -> next = list2;

        ListNode * temp = list2;
        while(temp && temp -> next)
            temp = temp -> next;
        temp -> next = last;
        return list1;
        
    }
};