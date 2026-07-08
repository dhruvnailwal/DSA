class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;

        int ans = 0 , prefix = 0;
        mp[0] = -1;

        for(int i = 0; i < n;i++){
            if(nums[i] == 0) prefix++;
            else prefix--;

            if(mp.count(prefix)){
                ans = max(ans,i - mp[prefix]);
            }
            else mp[prefix] = i;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna