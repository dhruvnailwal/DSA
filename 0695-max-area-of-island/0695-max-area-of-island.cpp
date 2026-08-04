class Solution {
public:
    void solve(vector<vector<int>>& grid,int i ,int j , vector<vector<bool>> &visited , int delrow[] , int delcol[] , int &count){
        visited[i][j] = true;
        int n = grid.size();
        int m = grid[0].size();

        for(int k = 0 ; k < 4 ; k++){
            int nr = delrow[k] + i;
            int nc = delcol[k] + j;

            if(nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc] && grid[nr][nc] == 1){
                count++;
                solve(grid,nr,nc,visited,delrow,delcol,count);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        int ans = 0 ;
        vector<vector<bool>> visited(n , vector<bool> (m));

        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visited[i][j] && grid[i][j] == 1){
                    int count = 1;
                    solve(grid,i,j,visited,delrow,delcol,count);
                    ans = max(ans,count);
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna