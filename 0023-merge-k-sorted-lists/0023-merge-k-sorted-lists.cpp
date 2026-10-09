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
    //for merging two linked llist
    ListNode * merge(ListNode *& head1 , ListNode *& head2)
    {
         if(head1 == NULL)
            return head2;

        if(head2 == NULL)
            return head1;

        if(head1 -> val <= head2 -> val)
        {
            head1 -> next = merge(head1 -> next , head2);
            return head1;
        }
        else
        {
            head2 -> next = merge(head1 , head2 -> next);
            return head2;
        }
    }

    //h1,h2,h3,h4  1st- h1 and h2 will be merged to singly LL in merged head & pushback to the vector ...then h1 and h2 will be removed then...
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        if(lists.size() == 0 )
            return NULL;

        while(lists.size()> 1)
        {
            ListNode * mergedhead = merge(lists[0],lists[1]);
            lists.push_back(mergedhead);
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists[0];
    }
};