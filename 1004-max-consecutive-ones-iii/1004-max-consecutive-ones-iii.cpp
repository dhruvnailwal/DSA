class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = INT_MIN;
        int n = nums.size();

        int i = 0 , j = 0;
        int count =  0;

        while(j < n){
            if(nums[j] == 0){
                count++;
            }
            if(count > k){
                if(nums[i] == 0) count--;
                i++;
            }
            if(count <= k) ans = max(ans,j - i + 1);

            j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna