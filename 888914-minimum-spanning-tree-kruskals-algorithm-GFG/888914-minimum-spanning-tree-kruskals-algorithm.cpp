class DisjointSet {
	public:
	vector<int> parent, rank;
	DisjointSet(int n) {
		parent.resize(n + 1);
		rank.resize(n + 1, 0);
		
		for (int i = 0 ; i <= n ; i++) {
			parent[i] = i;
		}
	}
	
	int findupar(int node) {
		if (node == parent[node])
			return node;
		
		return parent[node] = findupar(parent[node]);
	}
	
	void unionbyrank(int u, int v) {
		int upar_u = findupar(u);
		int upar_v = findupar(v);
		
		if (upar_u == upar_v)
			return ;
		
		if (rank[upar_u] < rank[upar_v])
			parent[upar_u] = upar_v;
		
		else if (rank[upar_v] < rank[upar_u])
			parent[upar_v] = upar_u;
		
		else {
			parent[upar_v] = upar_u;
			rank[upar_u]++;
		}
		
	}
};

class Solution {
	public:
	int kruskalsMST(int V, vector<vector<int>> &edges) {
		// code here
		vector<pair<int, pair<int, int>> > adj;
		
		for (auto it : edges) {
		    int u = it[0];
			int adjnode = it[1];
			int wt = it[2];
			
			adj.push_back({wt, {u, adjnode}});
		}
		
		sort(adj.begin(), adj.end());
		
		DisjointSet ds(V);
		
		int ans = 0;
		
		for (auto it : adj) {
			
			int wt = it.first;
			int u = it.second.first;
			int v = it.second.second;
			
			if (ds.findupar(u) != ds.findupar(v)) {
				ans += wt;
				ds.unionbyrank(u, v);
			}
		}
		
		return ans;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna