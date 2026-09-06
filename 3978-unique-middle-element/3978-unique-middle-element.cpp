class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>ans;
        for( auto i : nums)
            ans[i]++;

        int mid = 0+(nums.size())/2;

        
        if(ans[nums[mid]] == 1)
                return 1;

            return 0;
        
        
    }
};