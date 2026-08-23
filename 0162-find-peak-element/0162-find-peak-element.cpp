class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        //use bianry search 

        int start = 0;
        int end = arr.size() - 1;
        while(start <= end)
        {
            int mid = (start + end ) / 2;

            if(start == end)  // agar start aur end same to peak mil gaya
            {
                return start;
            }
            //agar mid ke baad wala element bada hai to matlab peak right ko milega
            else if(arr[mid] < arr[mid +1]) 
            {
                start = mid + 1 ;
            }
            else // warna left side jao including mid
            {
                end = mid;
            }
        }
        return -1;
        
    }
};