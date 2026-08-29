class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mpp;
        for(auto i : arr)
        {
            mpp[i]++;
        }
        for(auto i : mpp)
        {
            if(i.second > arr.size()/4)   // arr.size()/4 its 25%
            return i.first;
        }
        return -1;
        
    }
};