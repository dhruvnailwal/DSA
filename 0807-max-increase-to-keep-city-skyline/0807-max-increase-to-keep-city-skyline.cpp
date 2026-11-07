class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<int> max_row(n);
        vector<int> max_col(n);

        int maxi = 0;

        for(int i = 0; i < n ; i++){
            maxi = INT_MIN;
            for(int j = 0 ; j < n ; j++){
                maxi = max(grid[i][j],maxi);
            }
            max_row[i] = maxi;
        }


        for(int i = 0; i < n ; i++){
            maxi = INT_MIN;
            for(int j = 0 ; j < n ; j++){
                maxi = max(grid[j][i],maxi);
            }
            max_col[i] = maxi;
        }

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                ans += abs(grid[i][j] - min(max_row[i],max_col[j]));
            }
        }

        return ans;
        
    }
};                                                                                                             

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna