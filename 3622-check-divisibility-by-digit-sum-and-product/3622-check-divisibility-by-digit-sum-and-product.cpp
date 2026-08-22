class Solution {
public:
    bool checkDivisibility(int n) {
        int org = n;
        int sum = 0;
        int product = 1;
        while(n > 0){
            int rem = n%10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        int ans = sum+product;
        return org%ans == 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna