// Word Search
class Solution {
public:
    bool solve(int i,int j, int n,int m,vector<vector<char>>& board, string word)
    {
        if(word.size() == 0)
        {
            return true;
        }
        if(i < 0 || i >= n || j < 0 || j >= m || board[i][j] != word[0])
        {
            return false;
        }
        char c = board[i][j];
        board[i][j] = '*';
        string subs = word.substr(1);
        bool isFound = solve(i - 1,j,n,m,board, subs) || solve(i,j + 1,n,m,board, subs) || solve(i + 1,j,n,m,board,subs) || solve(i,j - 1,n,m,board, subs);
        board[i][j] = c;
        return isFound;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < m; j++)
            {
                if(solve(i,j,n,m,board,word))
                    return true;
            }
        }
        return false;
    }
};