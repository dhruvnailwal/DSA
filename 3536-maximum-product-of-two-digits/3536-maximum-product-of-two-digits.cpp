class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;

        while(n > 0){
            int rem = n % 10;
            v.push_back(rem);
            n /= 10;
        }

        sort(v.begin(),v.end());

        int s = v.size();

        return v[s-1] * v[s-2];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna