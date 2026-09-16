class Solution {
public:
    
    int maxProduct(vector<int>& arr) {
        
        int prefix = 1;
        int suffix = 1;
        
        
        int ans = INT_MIN;
        int n = arr.size();
        
        
        for(int i = 0; i < n; i++) {
            // prefix product = 1 if a zero found
            if(prefix == 0) {
                prefix = 1;
            }
            // suffix product = 1 agar 0 mila h previously
            if(suffix == 0) {
                suffix = 1;
            }
            
            // prefix product from starting
            prefix = prefix * arr[i];
            
            // suffix product from end
            suffix = suffix * arr[n - 1 - i];
            
            ans = max(ans, max(prefix, suffix));  //ans = max({ans, prefix, suffix});

        }
        
        return ans;
    }
};
