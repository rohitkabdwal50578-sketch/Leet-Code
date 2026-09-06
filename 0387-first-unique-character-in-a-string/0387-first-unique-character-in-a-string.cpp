class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ans;

        for(auto i : s)
            ans[i]++;

        for(auto i = 0; i< s.size() ; i++)
        {
            if( ans[s[i]] == 1)  //check if current index char appears once 
                return i;
        }
        return -1;
                
        
    }
};    //387