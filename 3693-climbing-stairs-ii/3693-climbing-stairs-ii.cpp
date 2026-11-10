class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,0);

        for(int i = n-1 ; i >= 0 ; i--){

            int cost = INT_MAX;

            int j = i + 1;

            if(j <= n){
                cost = dp[j] + costs[j-1] + (int)pow(j-i,2);
            }

            j = i + 2;

            if(j <= n){
                cost = min(cost , (dp[j] + costs[j-1] + (int)pow(j-i,2)));
            }

            j = i + 3;

            if(j <= n){
                cost = min(cost , (dp[j] + costs[j-1] + (int)pow(j-i,2)));
            }

            dp[i] = cost;

        }

        return dp[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna