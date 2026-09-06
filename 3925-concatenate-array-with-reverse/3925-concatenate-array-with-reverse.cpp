class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;

        for(auto i : nums)
            ans.push_back(i);

        for(int j = nums.size(); j > 0; j--)
            ans.emplace_back(nums[j - 1]);

        return ans;
    }
};