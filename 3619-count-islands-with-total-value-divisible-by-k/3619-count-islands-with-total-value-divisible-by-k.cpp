class Solution {
public:

    void solve(vector<vector<int>>& grid , int i , int j , int row[] , int col[] , vector<vector<bool>> &visited , long long &sum ){
        visited[i][j] = true;
        sum += grid[i][j];

        int n = grid.size();
        int m = grid[0].size();

        for(int x = 0 ; x < 4 ; x++){
            int nr = i + row[x];
            int nc = j + col[x];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc] && grid[nr][nc] != 0){
                solve(grid,nr,nc,row,col,visited,sum);
            }
        }
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int ans = 0;

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n , vector<bool>(m , false));

        int row[] = {-1 , 0 , 1 , 0};
        int col[] = {0 , 1 , 0 , -1};

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                long long sum = 0;
                if(!visited[i][j] && grid[i][j] != 0){
                    solve(grid,i,j,row,col,visited,sum);
                    if(sum % k == 0) ans++;
                }
            }
        }

        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna