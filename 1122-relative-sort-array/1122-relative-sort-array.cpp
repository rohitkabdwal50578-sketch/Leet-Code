class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int, int> mpp;
        for(auto i : arr1)
            mpp[i]++;

        vector<int> ans;

        // arr2 ke order me element add
        for(auto i : arr2) 
        {
            while(mpp[i] > 0) 
            {
                ans.push_back(i);
                mpp[i]--;
            }
        }

        // remaining elements
        vector<int> remaining;

        for(auto i : mpp) 
        {
            while(i.second > 0) 
            {
                remaining.push_back(i.first);
                i.second--;
            }
        }
        sort(remaining.begin(), remaining.end());
        for(auto i : remaining)
            ans.push_back(i);

        return ans;
    }
};