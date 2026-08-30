class Solution {
public:
    bool isPerfectSquare(long long num) {
        long long start = 1;
        long long end = num;
        while(start <= end)
        {
            long long mid = (start + end) / 2;

            if(mid * mid == num )     
                return 1;

            else if(mid * mid < num)
                start = mid + 1 ;

            else
                end = mid - 1;
        }
        return 0;
        
    }
};