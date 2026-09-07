class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixsum = 0;
        int total = 0;
        unordered_map<int,int>mpp;

        mpp[0] = 1;

        for(int i = 0; i< nums.size() ; i++)
        { 
            // prefixsum += nums[i];
            // if(mpp.count(prefixsum - k))
            // {
            //     total += mpp[prefixsum - k];
            //     mpp[prefixsum]++;
            // }
            // else
            //     mpp[prefixsum]++;


            //or



            prefixsum += nums[i];
            int remove = prefixsum - k;
            total += mpp[remove];
            mpp[prefixsum]++;

        }
        return total;
        
    }
};