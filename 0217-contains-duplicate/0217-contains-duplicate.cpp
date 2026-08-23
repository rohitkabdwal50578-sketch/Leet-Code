class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {

        unordered_map <int,int> ans;     //or use map
        for(auto i : arr)
        {
            ans[i]++;

            //agar array me  kisi bhi element ka count 2 hoga to matlab it contains duplicates to  return true
            if(ans[i] >1)
            return 1;
        }
        return 0;



        //AISE BHI KAR SAKTE HAI

        // for(int i = 0; i< arr.size(); i++)
        // {
        //     ans[arr[i]]++;
        
        //     if(ans[arr[i]] == 2) 
        //     {
        //         return 1;
        //     }
        // }
        // return 0;

        
    }
};