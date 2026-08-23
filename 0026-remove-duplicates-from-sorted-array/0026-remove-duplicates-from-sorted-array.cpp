class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        // TC = O(n)
        // SC = O(1)

        int i = 0; //store index of unique element only
        for(int j = i+1; j<arr.size() ;j++)
        {
            if(arr[i] ==arr[j])
            {
            //j++ will be done by for loop 
            }
            else
            {
                //arr[i] != arr[j];
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;   //because index starts from 0 based index



        
    }
};