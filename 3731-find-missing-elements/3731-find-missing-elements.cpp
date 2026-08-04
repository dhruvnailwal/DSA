class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        unordered_map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
            mini = min(i, mini);
            maxi = max(i, maxi);
        }
        vector<int> ans;
        for (int i = mini; i <= maxi; i++) {
            if (!mp.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna