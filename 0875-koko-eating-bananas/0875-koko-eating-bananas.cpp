class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = 0;
        int ans = 0;

        int n = piles.size();

        // bananas total
        long long sum = 0;

        // find total banana and piles
        for(int i = 0; i < n; i++)
        {
            sum += piles[i];
            end = max(end, piles[i]);
        }

        start = sum / h;
        // if average speed 0 them min speed = 1
        if(start == 0)
            start = 1;

        while(start <= end)
        {
            int mid = start + (end - start) / 2;

            // speed par total kitne hours lagenge
            long long total_time = 0;

            // each pile ko mid ki speed se khane ka time nikalenge
            for(int i = 0; i < n; i++)
            {
                // Complete group ka time
                total_time += piles[i] / mid;

                // Agar kuch bananas bach gay to unke liye 1 xtra hour lagega
                if(piles[i] % mid)
                    total_time++;
            }

            // if req time h se jyada hai to speed badhao
            if(total_time > h)
            {
                start = mid + 1;
            }

            // Agar h ya less time me finish ho raha ha to this speed possible hai
            else
            {
                // let urrent speed = answer
                ans = mid;
                //try lessers speedd
                end = mid - 1;
            }
        }
        return ans;
    }
};