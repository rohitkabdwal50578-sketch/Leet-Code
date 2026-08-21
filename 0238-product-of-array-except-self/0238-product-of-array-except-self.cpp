class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);


        //  prefix product(left product) , each value of i multiply all elements on its left
        //  prefix[0] = 1 kyuki pehle element ke left me kuch nahi hoga islie 1
        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] * arr[i-1];
        }

        // suffix product, for  each value of i, multiply all elements on its right
        //index n-1 ke right ka product already 1 hai islie n-2 se start
        for(int i = n-2; i >= 0; i--)
        {
            suffix[i] = suffix[i+1] * arr[i+1];
        }

        // prefix * suffix
        
        for(int i = 0; i < n; i++)
        {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
};