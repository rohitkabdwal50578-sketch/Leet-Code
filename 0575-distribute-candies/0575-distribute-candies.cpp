class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int eatCandy = candyType.size() / 2;

        unordered_map<int,int>checkforeven;
        for(auto i : candyType)
             checkforeven[i]++;
        
        return min(eatCandy, (int)checkforeven.size());        
    }
};