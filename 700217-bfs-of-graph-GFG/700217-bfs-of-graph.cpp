class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        
        vector<bool> visited(n,false);
         
        queue<int> q;
        
        vector<int> ans;
        
        q.push(0);
        ans.push_back(0);
        visited[0] = true;
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            for(auto v : adj[u]){
                if(!visited[v]){
                    q.push(v);
                    ans.push_back(v);
                    visited[v] = true;
                }
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna