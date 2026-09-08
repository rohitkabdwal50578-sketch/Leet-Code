class Solution {
public:
    bool isPalindrome(string str) {
        int start = 0;
        int end = str.size() - 1;

        while (start < end) 
        {
            if (str[start] == str[end]) 
            {
                start ++;
                end --;
            }
    
            else 
                return false;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (auto s : words) {
            if (isPalindrome(s))
                return s;
        }
        return "";
    }
};