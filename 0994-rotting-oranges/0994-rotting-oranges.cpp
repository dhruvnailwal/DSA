class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};

        if(fresh == 0) return 0;

        int ans = 0;

        while(!q.empty()){
            int size = q.size();
            bool rotten = false;

            while(size--){
                auto it = q.front();
                q.pop();

                int i = it.first;
                int j = it.second;

                for(int k = 0 ; k < 4 ; k++){
                    int nr = i + delrow[k];
                    int nc = j + delcol[k];


                    if(nr >=0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 1){
                        grid[nr][nc] = 2;
                        fresh--;
                        rotten = true;

                        q.push({nr,nc});
                    }
                }
            }

            if(rotten) ans++;
        }

        if(fresh > 0) return -1;

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna