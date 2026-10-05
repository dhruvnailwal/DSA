class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] == nums[i + 1]) {
                return true;
            }

        }
        
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna