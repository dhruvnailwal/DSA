class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;

        long long totalcommas = 0;
        long long rangestart = 1000;
        long long rangeend = rangestart * 1000 - 1;
        int commas = 1;

        while(rangestart <= n){
            long long nums = (min(n,rangeend) - rangestart + 1);
            totalcommas += 1LL * commas * nums;

            if(rangeend > n) break;

            rangestart *= 1000;
            rangeend = rangestart * 1000 - 1;

            commas++;
        }

        return totalcommas;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna