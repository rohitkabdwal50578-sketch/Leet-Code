class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s.compare(t) == 0)
        //     return true;
        // return false;





        map<char,int> ans;
        for(auto i : s)
        {
            ans[i]++;
        }
        for(auto i : t)
        {
            ans[i]--;
        }

        for(auto j : ans)
        {
            if(j.second )   // j zero nahi h --> check the value for 0
            return 0;
        }
        return 1;
        
    }
};