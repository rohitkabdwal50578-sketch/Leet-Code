class Solution {
public:
    void findlps(vector<int>&lps, string s)    //  string (s) = string (needle )
    {
        // code of kmp algorthm
        int prefix = 0;
        int suffix = 1;
        while(suffix < s.size())
        {
            if(s[suffix] == s[prefix])  // matches
            {
                lps[suffix] = prefix + 1;
                prefix ++;
                suffix ++;
            }
            else
            {
                if(prefix == 0)             //prefix points to index 0 
                    suffix ++;
                else                        //if prfix and suffix are not equal
                    prefix = lps[prefix - 1];

            }
        }

    }


    int strStr(string haystack, string needle) {


        vector<int>lps(needle.size(),0);   //longest prefix sum

        findlps(lps,needle);

       

        int first = 0;
        int second = 0;

        while( first < haystack.size() && second < needle.size())
        {
            if(needle[second] == haystack[first])
            {
                second ++;
                first ++;
            }
            else
            {
                if(second == 0)
                    first ++;
                else
                    second = lps[second - 1];
            }


        }
        if(second == needle.size())
            return first - second;
        else
            return -1;

       
        
    }
};