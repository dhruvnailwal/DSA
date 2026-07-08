class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0,ans = 0;

        map<int,int> mp;

        mp[0] = 1;

        for(auto i : nums){
            sum += i;
            int more = sum % k;

            if(more < 0) more += k;

            if(mp.count(more)){
                ans += mp[more];
            }
            
            mp[more]++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna