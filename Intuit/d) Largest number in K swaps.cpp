// Largest number in K swaps

class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string solve(int idx , string &s , int k){
        if(idx == s.length() || k == 0){
            return s;
        }
        char mx = s[idx];
        for(int i = idx + 1 ; i < s.length() ; i++){
            if(s[i] > mx){
                mx = s[i];
            }
        }
        if(mx == s[idx]){
            return solve(idx + 1,s,k);
        }
        
        string ans = s;
        for(int i = idx + 1 ; i < s.length() ; i++){
            if(mx == s[i]){
                swap(s[idx],s[i]);
                ans = max(ans, solve(idx + 1 , s , k - 1));
                swap(s[idx],s[i]);
            }
        }
        return ans;
    }
    string findMaximumNum(string s, int k)
    {
        return solve(0,s,k);
    }
};