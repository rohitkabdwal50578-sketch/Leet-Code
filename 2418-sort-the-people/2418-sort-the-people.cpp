class Solution { 
public: 
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) { 
 
        vector<pair<int, string>> combined; //pair to store height with its corresponding name
 
        for(int i = 0; i < heights.size(); i++)   //loop to store height and name in pairs
            combined.push_back({heights[i], names[i]}); 
 

        sort(combined.rbegin(), combined.rend());    //reverse in descending order
        vector<string> ans; 
 
        for(int i = 0; i < combined.size(); i++) 
        { 
            ans.push_back(combined[i].second); 
        } 
 
        return ans; 
    } 
}; 