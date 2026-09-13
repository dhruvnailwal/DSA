class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        unordered_map<int,vector<int>> adj;
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0 ; i < n ; i++){
            int count = 0 ;
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == 1) count++;
            }
            ans.push_back(count);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna