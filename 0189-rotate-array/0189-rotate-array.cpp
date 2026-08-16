class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k %= n;
        int m = n - k;

        reverse(nums.begin() + m,nums.end());
        reverse(nums.begin(),nums.begin() + m);
        reverse(nums.begin(),nums.end());
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna