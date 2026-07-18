class Solution {
  public:
    
    void solve(unordered_map<int,vector<int>> &adj , int u , vector<bool> &visited , stack<int> &st){
        visited[u] = true;
        
        for(int v : adj[u]){
            if(!visited[v]){
                solve(adj,v,visited,st);
            }
        }
        
        st.push(u);
    }
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        unordered_map<int,vector<int>> adj;
        
        vector<bool> visited(V,false);
        
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
        }
        
        stack<int> st;
        vector<int> ans;
        
        for(int i = 0 ; i < V ; i++){
            if(!visited[i]){
                solve(adj,i,visited,st);
            }
        }
        
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna