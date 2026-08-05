class Solution {
public:

    int count(const vector<int> &nums , int bound){
        int ans = 0 , cnt = 0;
        for(auto i : nums){
            cnt = i <= bound ? cnt + 1 : 0;
            ans += cnt;
        }

        return ans;
    }

    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right) - count(nums,left-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna