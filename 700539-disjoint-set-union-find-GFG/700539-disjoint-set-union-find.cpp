class DisjointSet{
    public:
    vector<int> parent , rank;
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        
        for(int i = 0 ; i <= n ; i++){
            parent[i] = i;
        }
    }
    
    int findupar(int node){
        if(node == parent[node]) return node;
        
        return parent[node] = findupar(parent[node]);
    }
    
    void unionbyrank(int u , int v){
        int x = findupar(u);
        int z = findupar(v);
        
        if(x == z) return ;
        
        // if(rank[upar_u] < rank[upar_v]) parent[upar_u] = upar_v;
        
        // else if(rank[upar_v] < rank[upar_u]) parent[upar_v] = upar_u;
        
        // else{
        //     parent[upar_v] = upar_u;
        //     rank[upar_u]++;
        // }
        
        parent[x] = z;
    }
};

class Solution {
  public:
    
    vector<int> DSU(int n, vector<vector<int>>& queries) {
        // code here
        vector<int> ans;
        DisjointSet ds(n);
        
        for(auto &it : queries){
            if(it[0] == 1){
                int u = it[1];
                int v = it[2];
                
                ds.unionbyrank(u,v);
            }
            else{
                ans.push_back(ds.findupar(it[1]));
            }
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna