class Solution {
public:

    void solve(unordered_map<int,vector<int>> &adj , int u , vector<bool> &visited){
        
        visited[u] = true;

        for(auto v : adj[u]){
            if(!visited[v]){
                solve(adj,v,visited);
            }
        }

    }

    int makeConnected(int n, vector<vector<int>>& connections) {

        unordered_map<int,vector<int>> adj;

        for(auto i : connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        vector<bool> visited(n);
        int count = 0;

        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                count++;
                solve(adj,i,visited);
            }
        }
        

        if(connections.size() < n - 1) return -1;
        
        return count - 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna