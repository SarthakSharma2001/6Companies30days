// Prerequisite Tasks
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
        vector<int> indegree(N,0);
	    unordered_map<int,vector<int>> mp;
	    for(int i = 0 ; i < prerequisites.size() ; i++)
	    {
	        indegree[prerequisites[i].first]++;
	        mp[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    queue<int> q;
	    for(int i = 0 ; i < N ; i++)
	    {
	        if(indegree[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    int cnt = 0;
	    while(!q.empty())
	    {
	        int t = q.front();
	        q.pop();
	        for(int i = 0 ; i < mp[t].size() ; i++)
	        {
	            if(--indegree[mp[t][i]] == 0)
	            {
	                q.push(mp[t][i]);
	            }
	        }
	        cnt++;
	    }
	    if(cnt >= N)
	    {
	        return true;
	    }
	    else
	        return false;
	}
};