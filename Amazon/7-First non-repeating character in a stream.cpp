// First non-repeating character in a stream
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int n = A.length();
		    string res = "";
		    int freq[27] = {0};
		    queue<char> q;
		    
		    for(int i = 0 ; i < n ; i++)
		    {
		        char c = A[i];
		        freq[c - 'a']++;
		        if(freq[c - 'a'] == 1)
		            q.push(c);
		        else
		        {
		            while(!q.empty() && freq[q.front() - 'a'] != 1)
		                q.pop();
		        }
		        if(!q.empty())
		            res += q.front();
		        else 
		            res += '#';
		    }
		    
		    return res;
		}

};