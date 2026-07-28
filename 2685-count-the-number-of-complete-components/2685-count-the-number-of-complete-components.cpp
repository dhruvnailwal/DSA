class Solution {
public:
    void solve(unordered_map<int,vector<int>> &adj , int u , vector<bool> &visited , vector<int> &comp){
        visited[u] = true;
        comp.push_back(u);

        for(auto v : adj[u]){
            if(!visited[v]){
                solve(adj,v,visited,comp);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int ans = 0;

        unordered_map<int,vector<int>> adj;

        for(auto &i : edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        vector<bool> visited(n , false);


        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                vector<int> comp;
                solve(adj,i,visited,comp);

                int s = comp.size();
                bool complete = true;

                //Every node should have n-1 degree
                for(auto j : comp){
                    if(adj[j].size() != s - 1){
                        complete = false;
                        break;
                    }
                }

                if(complete) ans++;
            }
        }


        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna