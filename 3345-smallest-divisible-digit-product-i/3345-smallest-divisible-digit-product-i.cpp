class Solution {
public:
    int product(int n){
        int product = 1;
        while(n>0){
            int rem = n%10;
            product *= rem;
            n = n/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(product(n) % t != 0){
            n++;
        }
        return n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna