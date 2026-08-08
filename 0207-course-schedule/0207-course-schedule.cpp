class Solution {
public:
    bool topo(int n, unordered_map<int, vector<int>> adj,
              vector<int>& indegree) {

        int count = 0;
        queue<int> q;

        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                count++;
                q.push(i);
            }
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto v : adj[u]) {
                indegree[v]--;

                if (indegree[v] == 0) {
                    q.push(v);
                    count++;
                }
            }
        }

        return count == n;
    }

    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        
        unordered_map<int,vector<int>> adj;
        vector<int> indegree(n);

        for(auto i : prerequisites){
            int u = i[0];
            int v = i[1];

            adj[v].push_back(u);
            indegree[u]++;
        }

        return topo(n,adj,indegree);

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna