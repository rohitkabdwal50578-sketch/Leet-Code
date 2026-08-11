class Solution {
public:
    bool isPalindrome(string s) {
   

    string ans = "";

    for(char ch : s)
    {
        if(isalnum(ch))
        {
            ans += tolower(ch);
        }
    }

    if(ans.size() < 2) return true;     //sirf single bachra hai to palindrime hoga hi
    
    int start = 0, end = ans.size() -1;
    bool flag = 0;
    while(start < end)
    {
        
        if(ans[start] == ans[end])
        {
            start ++;
            end--;
            flag = 1;
        }
        else 
       { 
            flag = 0;
            break;}
    }
    if(!flag)
    {
        return false;
    }
    else return true;

        
    }
};