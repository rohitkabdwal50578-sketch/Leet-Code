class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ans;

        for(auto i : ransomNote) //ransimnote ka har char increase
            ans[i]++;
        for(auto i : magazine)  //magazine ka har char decrease
            ans[i]--;

        for(auto i : ans)
        {
            if(i.second > 0)  //means magazine me req. char kam h ransomote banane ke liye.
                return 0;
        }
        return 1;
        
    }
};   