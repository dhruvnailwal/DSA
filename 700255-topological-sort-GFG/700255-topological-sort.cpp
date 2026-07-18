class Solution {
  public:
    vector<int> ans;
    
    void solve(unordered_map<int,vector<int>> &adj , int V , vector<int> &indegree){
        
        queue<int> q;
        
        for(int i = 0 ; i < V ; i++){
            if(indegree[i] == 0) {
                q.push(i);
                ans.push_back(i);
            }
        }
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            for(auto v : adj[u]){
                indegree[v]--;
                if(indegree[v] == 0) {
                    q.push(v);
                    ans.push_back(v);
                }
            }
        }
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        unordered_map<int,vector<int>> adj;
        
        vector<int> indegree(V);
        
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
            indegree[v]++;
        }
        
        solve(adj,V,indegree);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna