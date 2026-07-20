class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> ans(n , vector<int> (m));

        int total = m  * n;
        k %= total;

        for(int i = 0; i < n ;i++){
            for(int j = 0 ; j < m ; j++){

                int oldidx = i * m + j;

                int newidx = (oldidx + k) % total;

                int newrow = newidx / m;
                int newcol = newidx % m;

                ans[newrow][newcol] = grid[i][j];
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna