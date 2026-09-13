class Solution {
public:
    int solve(vector<int> &nums , int i , int Xor){
        if(i == nums.size()) return Xor;

        int include = solve(nums , i+1 , Xor^nums[i]);
        int exclude = solve(nums , i+1 , Xor);

        return include + exclude;
    }
    int subsetXORSum(vector<int>& nums) {
        return solve(nums , 0 , 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna