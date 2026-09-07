class Solution {
public:
    int countNegatives(vector<vector<int>>& matrix) {
        int negative = 0;

        for(int row = 0; row < matrix.size(); row++)
        {
            for(int col = 0; col < matrix[0].size(); col++)
            {
                if(matrix[row][col] < 0)
                {
                    negative++;
                }
            }
        }
        return negative;
    }
};