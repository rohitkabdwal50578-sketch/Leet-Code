class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        int p = part.length();
        while(n >0 && s.find(part) < n)
        
        {
            s.erase(s.find(part),p);

        }
        return s;
        
    }
};