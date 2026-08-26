class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int start = 0;
        int end = start +1;
        
        while(end < arr.size())
        {
            if(arr[start] == 0 && arr[end] !=0)
            {
                swap(arr[start],arr[end]);
                start++;
                end++;
            }
            else if(arr[start]==0 && arr[end]==0)
            {
            
                end++;
            }
            else        // arr[start] != 0
            {
                start++;
                end++;
            }
        }
        
    }
};