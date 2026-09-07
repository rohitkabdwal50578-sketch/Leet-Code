class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive = 0;
        int negative = 0;

        for(auto i : nums)
        {
            if( i == 0) 
                continue;
            else if(i < 0)
                negative ++;
            else
                positive ++;
        }
        return max(positive,negative);
        
    }
};