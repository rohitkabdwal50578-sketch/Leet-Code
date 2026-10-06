class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st;
        int count = 0;


        for(auto i = 0; i< s.size(); i++)
        {
            //opening bracket
            if(s[i] == '(')
                st.push(s[i]);
            else
            {
                //closing bracket
                if(st.empty())
                    count ++;
                else
                    st.pop();
            }

        }
        return st.size() + count;
    }
};