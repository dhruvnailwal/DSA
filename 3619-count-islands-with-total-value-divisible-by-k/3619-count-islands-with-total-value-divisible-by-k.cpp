class Solution {
public:

    void solve(vector<vector<int>>& grid , int i , int j , vector<vector<bool>> &visited , int delrow[] , int delcol[] , int k , long long &ans){

        visited[i][j] = true;

        int n = grid.size();
        int m = grid[0].size();
        ans += grid[i][j];

        for(int k = 0 ; k < 4 ; k++){
            int nr = i + delrow[k];
            int nc = j + delcol[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m && !visited[nr][nc] && grid[nr][nc] != 0){
                solve(grid,nr,nc,visited,delrow,delcol,k,ans);
            }
        }

    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n , vector<bool> (m , false));

        int delrow[] = {-1 , 0 , 1 , 0};
        int delcol[] = {0 , 1 , 0 , -1};

        int count = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visited[i][j] && grid[i][j] != 0){
                    long long ans = 0;

                    solve(grid,i,j,visited,delrow,delcol,k,ans);

                    if(ans % k == 0) count++;
                }
            }
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna