class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& nums, int start, set<vector<int>>& mp) {
        if (start == nums.size()) {
            if (!mp.count(nums)) {
                ans.push_back(nums);
                mp.insert(nums);
            }
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);

            backtrack(nums, start + 1, mp);

            swap(nums[start], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        ans.clear();

        set<vector<int>> mp;

        backtrack(nums, 0, mp);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna