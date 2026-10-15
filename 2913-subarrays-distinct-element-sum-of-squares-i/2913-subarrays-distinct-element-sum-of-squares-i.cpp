class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            map<int,int> mp;
            for(int j = i ; j < n ; j++){
                mp[nums[j]]++;
                ans += pow(mp.size(),2);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna