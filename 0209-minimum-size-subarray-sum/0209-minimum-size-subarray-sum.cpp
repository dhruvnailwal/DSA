class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int i = 0, j = 0;

        int ans = INT_MAX, sum = 0;

        while (j < n) {

            sum += nums[j];

            while(i < n && sum >= target){
                ans = min(ans,j-i+1);
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return ans == INT_MAX ? 0 : ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna