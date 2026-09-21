class Solution {
public:
    int trailingZeroes(int n) {
        //count the total number of 5 in a factoraial
        // iif n = 15  / by 5 == 3..then it will have 3 zeroes
        //agar divide karne par number 5 se bada h to use fir divide karo 5 se and repeat
        int count = 0;
        while(n>= 5)
        {
            count += n/5;
            n= n/5;
        }
        return count ;
    }
};