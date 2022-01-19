// Generate Parentheses
class Solution
{
    public:
    void helper(int n, vector<string> &res , int open_braces , int close_braces , string s)
    {
        if(close_braces == 0 && open_braces == 0)
        {
            res.push_back(s);
            return;
        }
        
        if(open_braces > 0)
        {
            string st = s;
            st.push_back('(');
            helper(n,res,open_braces -1,close_braces,st);
        }
        if(close_braces > open_braces)
        {
            string st = s;
            st.push_back(')');
            helper(n,res,open_braces,close_braces -1,st);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> res;
        int open_braces = n;
        int close_braces = n;
        string s;
        helper(n , res , open_braces , close_braces , s);
        return res;
    }
};