class Solution {
public:
    int maxArea(vector<int>& height) {
        //2 ptr approach
        
        int water = 0;
        int n = height.size();
        int start = 0, end = n-1;


        while(start < end)
        {
            int h = min(height[start],height[end]);
            int width = end - start ;

            int area = h* width;

            water = max(water,area);

            if(height[start] < height[end])
                start ++;
                
            else
                end--;
        }
        return water;

        
    }
};