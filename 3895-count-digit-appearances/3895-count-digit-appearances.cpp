class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        
        int ans = 0;

        for(auto i : nums){
            int n = i;
            while(n > 0){
                int rem = n % 10;
                if(rem == digit) ans++;
                n /= 10;
            }
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna