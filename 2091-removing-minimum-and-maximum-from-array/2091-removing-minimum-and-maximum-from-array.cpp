class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int minimum = *min_element(arr.begin(),arr.end());  //min element 
        int maximum = *max_element(arr.begin(),arr.end());  //max element 

        int minIndex, maxIndex;
        // or find index using -->>maxIndex = max_element(arr.begin(), arr.end()) - arr.begin();

        for(int i = 0 ; i< arr.size() ; i++)    //find indices of max and min
        {
            if(arr[i] == minimum)
                minIndex = i;

            if(arr[i] == maximum)
                maxIndex = i;
        }

        // one from front & one from end

        int start = ( minIndex + 1) + (arr.size() - maxIndex);  //min front & max end
        int end  =  ( maxIndex + 1) + (arr.size() - minIndex);  //max front  & min end    
        int both = min(start,end);                              //now "min" of both as asked in question


        //both frooom front

        int front = max(minIndex,maxIndex) +1; 
        //means agar minIndex 4th index me hai & maxIndex 5th ...to hame dono ko delete karne ke lie maximum 5th tak jana padega it means --> max(minindex,maxindex) +1 
        



        //both from end
        int back = arr.size() - min(minIndex,maxIndex);   
        //agar last se max 5th index me hai aur min 4th index me hai to hame sabko delete karne ke lie min 4th index tak jana padega jo hai 
        //size - min ka mtlb hai --> minindex  element se end tak kitne element hain

        return min({both,back,front});  //ab hame min number of deletion return karna h
        
    }
};