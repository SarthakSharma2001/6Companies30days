// Decode the string
class Solution{
public:
    string decodedString(string s){
        // code here
        stack<int> freq;
        stack<string> str;
        
        
        int currnum = 0;
        string currstr;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if (s[i] >= '0'  && s[i] <= '9')
            {
                currnum = currnum * 10 + (s[i] - '0');
            }
            else if (s[i] >= 'a'  && s[i] <= 'z')
            {
                currstr.push_back(s[i]);
            }
            else if (s[i] == '[')
            {
                str.push(currstr);
                freq.push(currnum);
                currnum = 0;
                currstr = "";        
            }
            else
            {
                string temp = currstr;
                currstr = str.top();  str.pop();
                int val = freq.top(); freq.pop();
                
                while(val--)
                {
                    currstr = currstr + temp;
                }
                currnum = 0;
            }
        }
        return currstr;
    }
};