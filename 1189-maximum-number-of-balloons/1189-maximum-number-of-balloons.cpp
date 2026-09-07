class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mpp;

        for(auto i : text)
            mpp[i]++;

        int ans = mpp['b'];

        ans = min(ans, mpp['a']);
        ans = min(ans, mpp['l'] / 2);
        ans = min(ans, mpp['o'] / 2);
        ans = min(ans, mpp['n']);


        return ans;
        
        
    }
};