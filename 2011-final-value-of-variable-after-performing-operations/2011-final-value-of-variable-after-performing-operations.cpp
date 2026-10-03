class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int count = 0;

        for(auto i = 0; i< s.size(); i++)
        {
            if(s[i] == "++X" || s[i] == "X++")
                count ++;

            else 
                count --;
        }
        return count;
        
    }
};