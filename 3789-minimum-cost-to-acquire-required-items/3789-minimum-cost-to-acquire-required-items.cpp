class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,int need2) {

        long long c1 = cost1;
        long long c2 = cost2;
        long long cb = costBoth;

        long long n1 = need1;
        long long n2 = need2;

        long long common = min(n1, n2);

        long long ans = common * min(cb, c1 + c2);

        if (n1 > n2) {
            ans += (n1 - n2) * min(cb, c1);
        } else {
            ans += (n2 - n1) * min(cb, c2);
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna