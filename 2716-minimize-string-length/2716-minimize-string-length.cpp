class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> ans;
        for(auto i : s)
            ans.insert(i);
            
        return ans.size();
        
    }
};