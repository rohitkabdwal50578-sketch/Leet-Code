class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        //tc = O(n)
        //sc = O(n)
        unordered_map<int, int> ans;
        vector<int> result;

        for(auto i : nums)
            ans[i]++;

        for(auto i : ans)
        {
            if(i.second > 1)
                result.push_back(i.first);
        }

        return result;
    }
};