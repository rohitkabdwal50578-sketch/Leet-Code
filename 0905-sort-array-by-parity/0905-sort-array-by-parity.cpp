class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int>ans;

        for(auto i : nums)
        {
            if(i % 2 == 0)
                ans.push_back(i);

        }
        for(auto i : nums)
        {
            if(i % 2 != 0)
                ans.push_back(i);
        }
        return ans;



    //     //costant s.c.

    //    int i = 0;
    //     for(int j = 0; j < nums.size(); j++)
    //     {
    //         if(nums[j] % 2 == 0)
    //         {
    //             swap(nums[i], nums[j]);
    //             i++;
    //         }
    //     }
 
        
    }
};