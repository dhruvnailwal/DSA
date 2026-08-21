class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n = rooms.size();

        unordered_map<int,vector<int>> adj;
        queue<int> q;

        for(int i = 0 ; i < n ; i++){
            for(auto j : rooms[i]){
                adj[i].push_back(j);
                if(i == 0) q.push(j);
            }
        }
        
        vector<bool> visited(n,false);
        visited[0] = true;

        while(!q.empty()){
            int u = q.front();
            q.pop();

            visited[u] = true;

            for(auto v : adj[u]){
                if(!visited[v]){
                    q.push(v);
                }
            }
        }

        for(auto i : visited){
            if(!i) return false;
        }

        return true;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna