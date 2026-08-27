class Solution {
public:
    vector<int> intersection(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        vector<int>ans;
        unordered_map<int,int>mpp;

        for(int i = 0; i<n; i++)
        {
            for(int j = 0 ; j< arr[i].size(); j++)  
            //rows ki length alagalag ho sakti hai islie i used current row ki size 
            {
                mpp[arr[i][j]]++;
            }
        }
        for(auto i : mpp)
        {
            //i.first -> number
            //i.second -> number kitni baar aaya
        
            //agar koi bhi number kka count n ke barabar hai to matlab wo teeno row me common hai
            if(i.second == n) 
            ans.emplace_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;

        
    }
};