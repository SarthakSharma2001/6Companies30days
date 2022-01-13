// Unit Area of largest region of 1's
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int largestRegion(vector<vector<int>> & grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return 0;
            
        if(grid[i][j] == 1){
            grid[i][j] = 0;
            
            return 1 + largestRegion(grid , i + 1 , j) + largestRegion(grid , i , j + 1)
            + largestRegion(grid , i - 1 , j) + largestRegion(grid , i , j - 1)
            + largestRegion(grid , i - 1 , j - 1) + largestRegion(grid , i - 1 , j + 1)
            + largestRegion(grid , i + 1 , j - 1) + largestRegion(grid , i + 1 , j + 1);
        }    
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 1)
                    ans = max(ans , largestRegion(grid , i , j));
            }
        }
        return ans;
    }
};