class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n);

        int positive = 0;
        int negative = 1;
        for(int i = 0; i<n ; i++)
        {
            if(arr[i] < 0)
            {
                ans[negative] = arr[i];
                negative = negative + 2;
            }
            else
            {
                ans[positive] = arr[i];
                positive += 2;
            }
        }
        return ans;
    }
};