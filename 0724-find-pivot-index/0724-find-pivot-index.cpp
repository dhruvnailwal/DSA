class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int rightsum = 0;

        for(auto i : nums) rightsum += i;

        int leftsum = 0;
        for(int i = 0; i < n ; i++){
            rightsum -= nums[i];
            if(leftsum == rightsum) return i;
            leftsum += nums[i];
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna