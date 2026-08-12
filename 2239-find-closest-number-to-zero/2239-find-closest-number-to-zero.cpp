class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = INT_MIN;
        int diff = INT_MAX;

        for (auto i : nums) {

            if (abs(i - 0) < diff) {

                ans = i;

            }

            else if (abs(i - 0) == diff) {

                ans = max(ans, i);
            
            }

            diff = min(diff, abs(i - 0));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna