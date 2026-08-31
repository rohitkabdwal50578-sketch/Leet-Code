class Solution {
public:

    bool  hasDuplicate(string &s1, string &s2)
    {
        vector<int>freq(26,0);
        for(auto i :  s2 )
            freq[i - 'a']++;

        for(auto i : s1)
        {
            if(freq[i-'a'] > 0)
                return 1;
        

            freq[i-'a']++;
        }
        return false;
    }
    int solve(int i,vector<string> &arr ,string temp, int n )
    {
        if(i>= n)
            return temp.length();

        int include = 0;
        int exclude = 0;
        if(hasDuplicate(arr[i] , temp))
            // cannot include arr[i]
            exclude = solve(i+1 , arr, temp, n);
            //same character mil gaya to not include islie include wala nahi likha

        else
        {
            exclude = solve(i+1,arr,temp,n);

            include = solve(i+1,arr,temp+arr[i],n);
            //temp+arr[i] because string unique thi islie add 
        }
        return max(include,exclude);
    }
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        string temp = "";
        return solve(0,arr,temp,n);
        
        
    }

    //tc = O( 2^n * n)
};