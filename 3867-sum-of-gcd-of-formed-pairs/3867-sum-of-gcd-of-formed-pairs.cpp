class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long ans = 0;

        int n = nums.size();
        
        vector<int> prefixGcd(n);
        int maxi = INT_MIN;

        for(int i = 0;i < n ; i++){
            maxi = max(maxi,nums[i]);
            prefixGcd[i] = __gcd(nums[i],maxi);
        }

        sort(prefixGcd.begin(),prefixGcd.end());


        int i = 0 , j = n-1;

        while(i < j){
            ans += __gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna