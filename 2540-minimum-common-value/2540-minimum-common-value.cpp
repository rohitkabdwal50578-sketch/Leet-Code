class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int start = 0;
       int end = 0;

       while(start<nums1.size() && end < nums2.size())
       {
        if(nums1[start] == nums2[end])
        {
            return nums1[start];
        }
        else if(nums1[start] < nums2[end])
        {
            start++;
        }
        else if(nums1[start] > nums2[end])
            end++;
       }
        return -1;
    }
};