class Solution {
	public:
	int spanningTree(int V, vector<vector<int>> & edges) {
		// code here
		
		unordered_map<int, vector<pair<int,int>>> adj;
		
		for(auto it : edges){
		    int u = it[0];
		    int v = it[1];
		    int wt = it[2];
		    
		    adj[u].push_back({v , wt});
		    adj[v].push_back({u , wt});
		    
		}
		
		priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> min_heap;
		
		min_heap.push({0,0});
		
		vector<bool> visited(V , false);
		
		int sum = 0;
		
		while(!min_heap.empty()){
		    auto it = min_heap.top();
		    min_heap.pop();
		    
		    int wt = it.first;
		    int node = it.second;
		    
		    if(!visited[node]){
		        
		        visited[node] = true;
		        sum += wt;
		        
		        for(auto it : adj[node]){
		            int adjnode = it.first;
		            int adjwt = it.second;
		            
		            if(!visited[adjnode]){
		                min_heap.push({adjwt,adjnode});
		            }
		        }
		    }
		}
		
		return sum;
		
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna