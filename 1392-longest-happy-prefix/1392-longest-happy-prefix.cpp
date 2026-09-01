class Solution {
public:
    string longestPrefix(string s) {

        //KMP ALGORITHIM  ONE OF THE HARDEST ALGO IN DSA
        vector<int> lps(s.size(),0);

        int prefix = 0;
        int suffix = 1;
        
        while(suffix < s.size())
        {  
             //match
            if(s[prefix] == s[suffix])
            {
                lps[suffix] = prefix + 1;
                suffix ++;
                prefix ++;
            }

            //not match
            else
            {
                if(prefix == 0)
                {
                    lps[suffix] = 0;
                    suffix ++;
                }
                else
                    prefix = lps[prefix - 1];
            }
        }
        return s.substr(0,lps[s.size() - 1]);  
        
    }
};