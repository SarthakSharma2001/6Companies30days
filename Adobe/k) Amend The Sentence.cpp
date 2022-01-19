// Amend The Sentence
class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        int n = s.size();
        string result = "";
        result += tolower(s[0]);
        for(int i = 1 ; i < n ; i++)
        {
            if(isupper(s[i]))
            {
                result += " ";
            }
            result += tolower(s[i]);
             
        }
        return result;
    }
}