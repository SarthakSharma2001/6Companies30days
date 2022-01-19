// Express as sum of power of natural numbers
class Solution{
    public:
    vector<vector<long long>> dp;
    long long int helper(int n,int x, int base)
    {
        long long int temp = pow(base,x);
        //base case
        if(temp == n)
        {
            return 1;
        }
        else if(temp > n)
        {
            return 0;
        }
        else if(dp[n][base] != -1)
        {
            return dp[n][base];
        }
        
        return dp[n][base] = helper(n - temp , x , base + 1) + helper(n , x , base + 1);
    }
    
    
    long long int numOfWays(int n, int x)
    {
        // code here
        int num = pow(n, 1.0 / x);
        dp.resize(n + 1, vector<long long>(num + 1, -1));
        return helper(n,x,1);
    }
};