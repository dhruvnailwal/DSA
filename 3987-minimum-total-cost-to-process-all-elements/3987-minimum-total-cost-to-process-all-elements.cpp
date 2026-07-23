class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1e9 + 7;

        long long ans = 0;
        long long ini_cost = 1;
        long long resource = k;

        for (auto i : nums) {
            if (resource < i) {
                long long need = (i - resource + k - 1LL) / k;

                __int128 sum = (__int128)need * (2LL * ini_cost + need - 1) / 2;

                ans = (ans + (long long)(sum % MOD)) % MOD;

                ini_cost += need;
                resource += need * 1LL * k;
            }

            resource -= i;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna