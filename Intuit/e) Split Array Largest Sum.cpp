// Split Array Largest Sum
class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        vector<unsigned int> prefix_sum(n, 0);
        vector<vector<unsigned int> > dp(n + 1, vector<unsigned int>(m + 1, INT_MAX));
        prefix_sum[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];
        }
        
        for(int i = 0; i < n; i++){
            dp[i][1] = prefix_sum[i];
        }
        
        dp[0][0] = 0;
        for(int i = 0; i < n; i++){
            for(int j = 2; j <= m; j++){
                for(int k = 0; k < i; k++){
                    dp[i][j] = min(dp[i][j], max(dp[k][j - 1], prefix_sum[i] - prefix_sum[k]));
                }
            }
        }
        
        return dp[n - 1][m];
    }
};