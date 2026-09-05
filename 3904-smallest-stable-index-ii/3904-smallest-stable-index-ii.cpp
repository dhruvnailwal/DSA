class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix_max(n);
        vector<int> suffix_min(n);

        int maxi = INT_MIN , mini = INT_MAX;

        for(int i = 0 ; i < n ; i++){
            maxi = max(maxi,nums[i]);
            prefix_max[i] = maxi;
        }

        for(int i = n - 1 ; i >= 0 ; i--){
            mini = min(mini , nums[i]);
            suffix_min[i] = mini;
        }

        int idx = -1;

        for(int i = 0 ; i < n ; i++){
            if((prefix_max[i] - suffix_min[i]) <= k){
                idx = i;
                break;
            }
        }

        return idx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna