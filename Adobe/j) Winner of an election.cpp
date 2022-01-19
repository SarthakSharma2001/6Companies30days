//Winner of an election
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string,int> um;
       
        int m = 1;
        for(int i = 0 ; i  < n ; i++)
        {
            um[arr[i]]++;
            m = max(m,um[arr[i]]);
        }
        vector<string> v;
        for(auto i:um)
        {
            if( i.second == m )
            {
                v.push_back(i.first);
            }
        }
        sort(v.begin(),v.end());
        vector<string> a;
        a.push_back(v[0]);
        a.push_back(to_string(m));
        return a;
    }
};