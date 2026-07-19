class Solution {
public:
    void bfs(vector<vector<char>>& grid, int i, int j,
             vector<vector<bool>>& visited) {
        int n = grid.size();
        int m = grid[0].size();
        visited[i][j] = true;
        queue<pair<int, int>> q;
        q.push({i, j});

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            int r = it.first, c = it.second;

            int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                    grid[nr][nc] == '1' && !visited[nr][nc]) {

                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    ans++;
                    bfs(grid, i, j, visited);
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna