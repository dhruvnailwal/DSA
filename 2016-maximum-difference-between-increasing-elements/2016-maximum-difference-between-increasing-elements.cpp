class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int mini = nums[0];
        int maxi = INT_MIN;

        int n = nums.size();

        for(int i = 1 ; i < n ; i++){
            int diff = nums[i] - mini;

            maxi = max(maxi,diff);
            mini = min(mini,nums[i]);
        }

        if(maxi <= 0) return -1;

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna