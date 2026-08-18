class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0;
        int ans = INT_MIN;

        for(auto i : nums){
            sum += i;


            ans = max(ans,sum);

            if(sum < 0){
                sum = 0;
            }

        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna