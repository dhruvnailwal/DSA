class Solution {
  public:
  
    vector<int> ans;
    
    void solve(vector<vector<int>>& adj,int u ,vector<bool> &visited){
        if(visited[u] == true) return;
        
        visited[u] = true;
        ans.push_back(u);
        
        for(int v : adj[u]){
            if(!visited[v]){
                solve(adj,v,visited);
            }
        }
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        
        vector<bool> visited(n,false);
        
        solve(adj,0,visited);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna