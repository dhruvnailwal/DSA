class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        
        int maxi = *max_element(nums.begin(),nums.end());

        int i = 0 , j = 0;

        int n = nums.size();

        map<int,int> mp;

        while(j < n){
            mp[nums[j]]++;

            while(i <= j && mp[maxi] >= k){
                
                ans += n - j;

                mp[nums[i]]--;

                if(mp[nums[i]] == 0) mp.erase(nums[i]);

                i++;
            }

            j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna