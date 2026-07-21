class Solution {
	public:
	vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
		// Code here
		vector<vector<pair<int, int>> > adj(V);
		
		for (auto &e : edges) {
			int u = e[0];
			int v = e[1];
			int wt = e[2];
			
			adj[u].push_back({v, wt});
			adj[v].push_back({u, wt});
		}
		
		vector<int> ans(V, 1e9);
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > min_heap;
		
		min_heap.push({0, src});
		ans[src] = 0;
		
		while (!min_heap.empty()) {
			
			auto [d , u] = min_heap.top();
			min_heap.pop();
			
			if(d > ans[u]) continue;
			
			for (auto [v , wt] : adj[u]) {
				
				if (d + wt < ans[v]) {
					ans[v] = d + wt;
					min_heap.push({ans[v], v});
				}
			}
		}
		
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna