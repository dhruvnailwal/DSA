class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();
        int sum = 0, ans = 0;

        mp[0] = 1;
        
        for(int i = 0; i < n ;i++){
            sum += nums[i];
            int more = sum - k;

            if(mp.count(more)) ans += mp[more];

            mp[sum]++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna