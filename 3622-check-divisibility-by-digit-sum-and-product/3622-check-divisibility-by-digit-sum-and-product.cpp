class Solution {
public:
    bool checkDivisibility(int n) {
        int x = n;  //kyuki last n/=10 me n zero ho jayega
        int product = 1;
        int sum = 0;
        while(n!=0)
        {
            int digit = n %10;
             product *= digit;
             sum +=digit;
             n= n/10;
        }
        if(x %(product+ sum) ==0)
        return 1;
        else 
        return 0;
        
    }
};