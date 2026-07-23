class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // code here
        int n = edges.size();
        
        vector<vector<int>> adj(V);
        
        for(auto it : edges){
            
            int u = it.first;
            int v = it.second;
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        return adj;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna