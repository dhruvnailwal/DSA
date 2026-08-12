class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0 , j = 0;

        map<int,int> mp;

        int ans = 0;

        while(j < n){
            
            mp[nums[j]]++;

            while(mp[nums[j]] > k){
                mp[nums[i]]--;
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna