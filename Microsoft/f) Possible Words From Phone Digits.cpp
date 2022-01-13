// Possible Words From Phone Digits
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        string str[10];
        str[0] = str[1] = "";
        str[2] = "abc" ; str[3] = "def"; 
        str[4] = "ghi" ; str[5] = "jkl" ; str[6] = "mno";
        str[7] = "pqrs" ; str[8] = "tuv" ; str[9] = "wxyz";
        
        vector<string> ans = {""};
        
        for(int i = 0 ; i < N ; i++){
            vector<string> cur;
            for(auto s:ans){
                for(auto c: str[a[i]]){
                    s.push_back(c);
                    cur.push_back(s);
                    s.pop_back();
                }
            }
            ans= cur;
        }

        return ans;
    }
};