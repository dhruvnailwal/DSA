class Solution {
  public:
    void dfs(int u , unordered_map<int,vector<int>>& adj,vector<int> &vis,stack<int> &st){
        vis[u] = true;
        
        for(auto v : adj[u]){
            if(!vis[v]){
                dfs(v,adj,vis,st);
            }
        }
        
        st.push(u);
    }
    void dfs2(int u , unordered_map<int,vector<int>>& adj2,vector<int> &vis2){
        vis2[u] = true;
        
        for(auto v : adj2[u]){
            if(!vis2[v]){
                dfs2(v,adj2,vis2);
            }
        }
    }
    int kosaraju(int V, vector<vector<int>> &edges) {
        // code here
        unordered_map<int,vector<int>> adj;
        
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
        }
        
        vector<int> vis(V,0);
        stack<int> st;
        
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                dfs(i,adj,vis,st);
            }
        }
        
        for(auto &row : edges){
            reverse(row.begin(),row.end());
        }
        
        unordered_map<int,vector<int>> adj2;
        
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj2[u].push_back(v);
        }
        
        int ans = 0;
        vector<int> vis2(V,0);
        
        while(!st.empty()){
            int u = st.top();
            st.pop();
            
            if(!vis2[u]){
                ans++;
                dfs2(u,adj2,vis2);
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna