class Solution {
public:
    void solve(vector<vector<char>>& grid , int i , int j , int row[] , int col[] , vector<vector<bool>> &visited){
        visited[i][j] = true;

        int n = grid.size();
        int m = grid[0].size();

        for(int k = 0 ; k < 4 ; k++){
            int nr = row[k] + i;
            int nc = col[k] + j;

            if(nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc] && grid[i][j] == '1'){
                solve(grid,nr,nc,row,col,visited);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n , vector<bool> (m , false));

        int row[] = {-1 , 0 , 1 , 0};
        int col[] = {0 , 1 , 0 , -1};

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    ans++;
                    solve(grid,i,j,row,col,visited);
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna