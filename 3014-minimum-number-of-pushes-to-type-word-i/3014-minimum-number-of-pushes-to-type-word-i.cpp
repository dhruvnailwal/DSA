class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans = 0;

        if (n <= 8)
            return n;

        else {
            ans = 8;
            n -= 8;
            int count = 2;
            while (n >= 8) {
                ans += count * 8;
                n -= 8;
                count++;
            }

            ans += count * n;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna