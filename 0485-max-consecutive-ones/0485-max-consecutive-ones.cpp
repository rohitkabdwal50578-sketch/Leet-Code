class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int longestOnes = 0;
        int count = 0;

        for(auto i : arr)
        {
            if(i == 1)
            {
                count ++;
                longestOnes = max(longestOnes,count);
            }
            else
            {
                count = 0;
            }
        }
        return longestOnes;
        
    }
};