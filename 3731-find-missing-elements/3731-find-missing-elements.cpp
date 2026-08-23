class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        int min = *min_element(arr.begin(), arr.end());
        int max = *max_element(arr.begin(), arr.end());
        vector<int>ans;
    

        for(int i = min ; i<= max; i++)
        {
            int count = 0;
            for(int j = 0; j<arr.size() ; j++)
            {
                
                if(arr[j] == i)
                {
                    count ++;
                    break;
                }  
            }
            if(count ==0){

                ans.push_back(i);
            }
        }
        return ans;    
    }
};