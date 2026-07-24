class Solution {
public:
    void BFS(vector<vector<int>>& adj,int u , vector<bool> &visited){
        queue<int> q;
        q.push(u);
        visited[u] = true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(int v : adj[front]){
                if(!visited[v]){
                    // BFS(adj,v,visited);
                    q.push(v);
                    visited[v] = true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& ic) {

        int n = ic.size();
        vector<bool> visited(n,false);
        vector<vector<int>> adj(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ic[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                BFS(adj,i,visited);
                ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna