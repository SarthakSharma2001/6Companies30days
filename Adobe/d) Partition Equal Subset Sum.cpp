// Partition Equal Subset Sum
class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        
        for(int i = 0; i < N; i++) {
            sum += arr[i];
        }
        
        if(sum % 2 != 0) 
            return 0;
        
        sum = sum / 2;
        
        vector<vector<int>> dp(N + 1, vector<int> (sum + 1, 0));
        
        for(int i = 0; i < N+1; i++) {
            dp[i][0] = 1;
        }
        
        for(int i = 1; i < sum + 1; i++) {
            dp[0][i] = 0;
        }
        
        for(int i = 1; i < N + 1; i++) {
            for(int j = 1; j < sum + 1; j++) {
                if(arr[i - 1] > j) {
                    dp[i][j] = dp[i - 1][j];
                }
                else{
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
            }
        }

        return dp[N][sum];
    }
};