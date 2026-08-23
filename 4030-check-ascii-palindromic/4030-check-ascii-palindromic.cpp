class Solution { 
public: 
    bool isPalindromic(string s) { 
        string s2; 
        for(char ch : s) 
        { 
            // each character ko 8 bit binary convert(bitset<8>) 
            //to_string because binary cannot be concatenated
            s2 += bitset<8>(ch).to_string();  
        } 

        string str = s2; 
        reverse(s2.begin(), s2.end()); 

        if(str.compare(s2) == 0)    // or write -> if(s2 == str)
        { 
            return 1; 
        } 

        return 0; 
    } 
};