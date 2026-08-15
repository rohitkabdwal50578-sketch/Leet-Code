class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int start = 0;
        int end = n*m - 1;


        while(start <= end)
        {
            int mid = start + (end - start)/2;

            int rowIndex = mid / m;
            int columnIndex = mid % m; 

            if(matrix[rowIndex][columnIndex] == target)
            {
                return 1;
            }
            else if(matrix[rowIndex][columnIndex]  < target)
            {
                start = mid + 1 ;

            }
            else 
            {
                end = mid - 1;
            }
        }
        return 0;
        
    }
};