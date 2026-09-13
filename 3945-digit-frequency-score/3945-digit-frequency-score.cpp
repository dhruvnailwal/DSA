class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0 ;

        while(n > 0){
            int rem = n % 10;
            ans += rem;
            n /= 10;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna