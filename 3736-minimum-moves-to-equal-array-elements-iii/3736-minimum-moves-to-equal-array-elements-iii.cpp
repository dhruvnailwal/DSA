class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        int maxi = INT_MIN;
        for(auto i : nums){
            maxi = max(i,maxi);
        }
        for(auto i : nums){
            count += maxi - i;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna