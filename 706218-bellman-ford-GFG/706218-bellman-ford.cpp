class Solution {
	public:
	vector<int> bellmanFord(int V, vector<vector<int>> & edges, int src) {
		// Code here
		vector<int> ans(V, 1e8);
		
		ans[src] = 0;
		
		for (int i = 0 ; i < V - 1; i++) {
			
			for (auto it : edges) {
				int u = it[0];
				int v = it[1];
				int wt = it[2];
				
				if (ans[u] != 1e8 && ans[u] + wt < ans[v]) {
					ans[v] = ans[u] + wt;
				}
			}
		}
		
		for (auto it : edges) {
		    
			int u = it[0];
			int v = it[1];
			int wt = it[2];
			
			if (ans[u] != 1e8 && ans[u] + wt < ans[v]) {
				return {-1};
			}
		}
		
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna