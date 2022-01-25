// Number of Provinces
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        if(n == 0)
            return n;
        int circles = 0;
        vector<bool> visited(n,false);  
        for(int i = 0 ; i < n ; i++){
            if(visited[i])
                continue;
            queue<int> q1;
            q1.push(i);
            circles++;

           while(!q1.empty()){               
           int cur = q1.front();
           q1.pop();
           visited[cur] = true;
               for(int j = 0 ; j < isConnected[cur].size() ; j++){
                    if(visited[j] == false && isConnected[cur][j] == 1){
                    q1.push(j);
                    visited[j] = true;
                    }
               }
            }
        }
        return circles;
    }
};