class Solution {
public:
    void solve(unordered_map<int,vector<int>> &adj , int u , vector<bool> &visited){

        visited[u] = true;

        for(auto v : adj[u]){
            if(!visited[v]){
                solve(adj , v , visited);
            }
        }

    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<bool> visited(n,false);

        unordered_map<int,vector<int>> adj;

        for(auto i : edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        solve(adj,source,visited);

        return visited[destination];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna