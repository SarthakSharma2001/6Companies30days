// Maximum Profit
class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        int profit[K + 1][N];

        for(int i = 0; i <= K; i++)
            profit[i][0] = 0;

        for(int j = 0; j < N; j++)
            profit[0][j] = 0;

        for(int i = 1; i <= K; i++) {
            for(int j = 1; j < N; j++) {
                int cmax = INT_MIN;

                for(int m = 0; m < j; m++)
                    cmax = max(cmax, A[j] - A[m] + profit[i - 1][m]);

                profit[i][j] = max(profit[i][j - 1], cmax);
            }
        }
        return profit[K][N-1];
    }
};
