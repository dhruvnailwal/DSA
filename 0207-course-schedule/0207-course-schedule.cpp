class Solution {
public:
    bool toposort(int n, unordered_map<int, vector<int>>& adj , vector<int>& indegree) {
        queue<int> q;

        int count = 0;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                count++;
                q.push(i);
            }
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (int v : adj[u]) {
                indegree[v]--;

                if (indegree[v] == 0) {
                    q.push(v);
                    count++;
                }
            }
        }

        return count == n;
    }
    bool canFinish(int n, vector<vector<int>>& arr) {
        unordered_map<int, vector<int>> adj;

        vector<int> indegree(n);

        for (auto i : arr) {

            int u = i[1];
            int v = i[0];

            indegree[v]++;
            adj[u].push_back(v);
        }

        return toposort(n, adj, indegree);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna