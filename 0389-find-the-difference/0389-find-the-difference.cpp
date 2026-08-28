class Solution {
public:
    char findTheDifference(string s, string t) {

        map<char,int> mpp;
        for(auto i : s)
        {
            mpp[i]++;
        }
        for(auto i : t)
        {
            mpp[i]--;
        }
        for(auto i : mpp)
        {
            if(i.second < 0)
            {
                return i.first;
            }
        }
        return ' ';
        
    }
};