class Solution {
public:
    int solve(int x){
        long long ans = 0;

        while(x > 0){
            long long rem = x % 10;

            ans = ans * 10 + rem;

            x /= 10;
        }

        return ans;

    }
    bool isPalindrome(int x) {

        if(x < 0) return false;

        long long rev = solve(x);

        return rev == x;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna