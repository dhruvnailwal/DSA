class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int i = 0, j = 0;

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        visited[i][j] = true;

        while (true) {
            char dir = grid[i][j];

            int ni = i, nj = j;

            if (dir == 'L') {
                nj--;
            }
            else if (dir == 'R') {
                nj++;
            }
            else if (dir == 'U') {
                ni--;
            }
            else if (dir == 'D') {
                ni++;
            }

            if (ni < 0 || ni >= n || nj < 0 || nj >= m)
                break;

            if (visited[ni][nj])
                break;

            i = ni;
            j = nj;

            visited[i][j] = true;
        }

        return {i, j};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna