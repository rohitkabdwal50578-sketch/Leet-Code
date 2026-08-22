class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());

        int i = 0;
        int j = 0;
        int count = 0;
        while(i<players.size() && j<trainers.size())
        {
            //The ith player can match with the jth trainer if the player's ability is less than or equal to the trainer's training capacity
            
            if(players[i]<= trainers[j])
            {
                count++;
                i++;
                j++;
            }
            else 
            {
                j++;   // trainer capacity is smaller than player ability
            }
        }
        return count;
        
        
    }
};