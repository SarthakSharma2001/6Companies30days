// Course Schedule II
class Solution {
public:
    void addEdge(vector <int> adj[],vector<vector<int>>& prerequisites){
        for(int i = 0 ; i < prerequisites.size() ; i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }    
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector <int> adj[numCourses];
        addEdge(adj,prerequisites);
        queue <int> q;
        vector <int> indegree(numCourses,0);
        vector <int> ans;
        int check = 0;
        
        for(int i = 0 ; i < numCourses ; i++){
            for(int &v: adj[i])
                indegree[v]++;
        }
        for(int i = 0 ; i < numCourses; i++)
            if(indegree[i] == 0)
                q.push(i);
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            check++;
            ans.push_back(u);
            for(int &v: adj[u]){
                indegree[v]--;
                if(indegree[v] == 0)
                    q.push(v);
            }
        }
        if(check == numCourses)
            return ans;
        else
            return {};
    }
};