class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 2, i = 0, product = 1;

        for (int j = 0; j < nums.size(); j++) {

            int x = nums[j];

            while (gcd(product, x) > 1)
                product /= nums[i++];

            product *= x;

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna