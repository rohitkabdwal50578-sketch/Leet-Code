class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size ();

        int sum = n*(n+1)/2;
        int x = 0;
        for(int  i = 0; i<n ;i++)
        {
            x += arr[i];
        }
        
        return (sum - x);
    }
    
};