// Pots of Gold Game
class Solution {
public:
    int func(vector<int> &a, int low, int high, vector<vector<int>> &dp){
        if(low > high) 
            return 0;
        if(low == high) 
            return a[low];
        if(dp[low][high] != -1) 
            return dp[low][high];
        
        int val1 = a[low] + min(func(a, low+2, high, dp), func(a, low+1, high-1, dp));
        int val2 = a[high] + min(func(a, low+1, high-1, dp), func(a, low, high-2, dp));
        
        return dp[low][high] = max(val1, val2);
    }
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    vector<vector<int>> dp(n, vector<int>(n, -1));
        return func(A , 0 , n-1 , dp);
    }
};