class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int> ans;
        int a= arr.size();

        for (int i = 0; i < a; i++)
        {
            for (int j = i + 1; j < a; j++)
            {
                if (arr[i] + arr[j] == target)
                {
                    ans.emplace_back(i);
                    ans.emplace_back(j);
                    return ans;
                }
            }
        }

        return ans;
    }
        
    
};