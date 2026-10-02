class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {\

        //optimal is using monotonic stack

        vector<int> temp;
        vector<int> ans;

        ListNode* current = head;
        while(current)
        {
            temp.push_back(current->val);
            current = current->next;
        }

        for(int i = 0; i < temp.size(); i++)
        {
            int greater = 0;
            for(int j = i + 1; j < temp.size(); j++)
            {
                if(temp[j] > temp[i])
                {
                    greater = temp[j];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};