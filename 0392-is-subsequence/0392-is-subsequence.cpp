class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0; // for string s 

        for(int j = 0; j < t.length() ; j++)
        {
            if(s[i] == t[j])  //char matches and then move to next char of string s
                i++;
        }
        if(i >= s.length())  //all char of string s are matched
            return 1;
        return 0;

        
        
    }
};   //392