class Solution {
  public:
    bool BFS(vector<vector<int>>& adj,int u,vector<bool> &visited){
        queue<pair<int,int>> q;
        
        q.push({u,-1});
        
        visited[u] = true;
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            int u = it.first;
            int parent = it.second;
            
            for(int v : adj[u]){
                
                if(!visited[v]){
                    q.push({v,u});
                    visited[v] = true;
                }
                
                else if(v != parent) return true;
            }
        }
        
        return false;
    }

bool isCycle(int V, vector<vector<int>>& edges) {
    vector<vector<int>> adj(V);

    for (auto &e : edges) {
        int u = e[0];
        int v = e[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (BFS(adj, i, visited)) {
                return true;
            }
        }
    }

    return false;
    }
}; 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna