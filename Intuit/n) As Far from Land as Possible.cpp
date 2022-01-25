// As Far from Land as Possible
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n == 0)
            return 0;
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX-1000));
        int ans = INT_MIN;
        bool flag = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(grid[i][j] == 1)
                { 
                    dp[i][j] = 0;
                    flag = 1;
                }
                else
                {
                    if(i > 0)
                    {
                        dp[i][j] = min(dp[i][j],dp[i - 1][j] + 1);
                    } 
                    if(j>0)
                    {
                     dp[i][j] = min(dp[i][j],dp[i][j - 1] + 1);
                    }
                }
            }
        }
        for(int i = n - 1 ; i >= 0 ; i--)
        {
            for(int j = m - 1 ; j >= 0 ; j--)
            {
                if(i < n - 1)
                {
                    dp[i][j] = min(dp[i][j],dp[i + 1][j] + 1);
                }
                if(j < m - 1)
                {
                    dp[i][j] = min(dp[i][j],dp[i][j + 1] + 1);
                }
            }
        }
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
               ans = max(ans,dp[i][j]);
        }
        if(ans == 0 || flag == 0)
            return -1;
        return ans;
    }
};