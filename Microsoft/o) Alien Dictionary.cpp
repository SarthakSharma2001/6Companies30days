// Alien Dictionary
class Solution{
    public:
    void topoSort(int node, vector<int> adj[], vector<bool> &visited, string &order) {
        visited[node] = true;
        for(auto it : adj[node]) {
            if(!visited[it]) {
                topoSort(it, adj, visited, order);
            }
        }
        char a = node + 'a';
        order = a + order;
        return;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<int> adj[K];
        for(int i = 0 ; i < N - 1 ; i++) {
            string s1 = dict[i];
            string s2 = dict[i + 1];
            
            int j = 0;
            while(j < min(s1.size(), s2.size())) {
                if(s1[j] != s2[j]) {
                    adj[s1[j] - 'a'].push_back(s2[j] - 'a');
                    break;
                }
                j++;
            }
        }
        
        string order = "";
        vector<bool> visited(K, false);
        for(int i = 0 ; i < K ; i++) {
            if(!visited[i]) {
                topoSort(i, adj, visited, order);
            }
        }
        return order;
    }
};
