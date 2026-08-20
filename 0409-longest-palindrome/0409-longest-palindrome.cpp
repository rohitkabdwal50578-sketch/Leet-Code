class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        //sabse pehle count of each character 
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a') {
                lower[s[i] - 'a']++;
            } else {
                upper[s[i] - 'A']++;
            }
        }

        int count = 0;
        bool odd = 0;

        //ab longest palindrome length after counting each leter
        for (int i = 0; i < 26; i++) {
            if (lower[i] % 2 == 0) {
                count += lower[i];
            } else {
                count += lower[i] - 1; // odd wale me se minus 1 kardo
                odd = 1;
            }

            if (upper[i] % 2 == 0) {
                count += upper[i];
            } else {
                count += upper[i] - 1;
                odd = 1;
            }
        }
        //agar 1 hi odd number hoga to use add kardo 
        return count + odd;
    }
};
