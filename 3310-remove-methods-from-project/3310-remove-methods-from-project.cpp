class Solution {
public:
    void solve(unordered_map<int, vector<int>>& adj, int u,
               vector<int>& visited) {
        visited[u] = 1;

        for (auto v : adj[u]) {
            if (visited[v] == 0) {
                solve(adj, v, visited);
            }
        }
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& arr) {

        vector<int> ans;

        vector<int> visited(n, 0);

        unordered_map<int, vector<int>> adj;

        for (auto i : arr) {
            adj[i[0]].push_back(i[1]);
        }

        solve(adj, k, visited);

        for (auto& e : arr) {
            if (visited[e[0]] == 0 && visited[e[1]] == 1) {
                for (int i = 0; i < n; i++) {
                    ans.push_back(i);
                }

                return ans;
            }
        }

        for (int i = 0; i < n; i++) {
            if(visited[i] == 0) ans.push_back(i);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna