class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26,0);
        for(int i = 0 ; i< sentence.size(); i++)
        {
            int index = sentence[i] - 'a';   //check ascii value a -> 97
            alpha[index] = 1;           
           //har baar replace 0 by 1 kar dega  agar character mil jayega to
        }
        for(int i = 0;i<26;i++)
        {
            if(alpha[i] == 0)
            return 0;
        }
        return 1;
        
    }
};