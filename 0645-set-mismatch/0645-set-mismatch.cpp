class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();

        long long sum = 0;
        long long ss = 0;

        for (auto i : nums) {
            sum += i;
            ss += 1LL * i * i;
        }

        long long esum = n * (n + 1) / 2;
        long long ess = n * (n + 1) * (2 * n + 1) / 6;

        long long s = sum - esum;
        long long sss = ss - ess;

        long long total = sss / s;

        long long dup = (s + total) / 2;
        long long miss = dup - s;

        return {(int)dup, (int)miss};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna