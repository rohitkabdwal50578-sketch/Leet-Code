class Solution {
public:
    int countHillValley(vector<int>&  nums) {
        int i = 0; //left  me non equal integer ko point 
        int j = 1; //right side
        int count = 0;
        while( j+1 < nums.size())   //matlab right me neighbour nahi mil sakta
        {
            if((nums[i] < nums[j] && nums[j] > nums[j+1]) || nums[i] > nums[j] && nums[j] < nums[j+1])
            {
                count++;
                i = j;
            }
            j++;
            

        }
        return count;
    } 
    
};