class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        long long a = arr[n-1] * arr[n-2] * arr[n-3];
        long long b = arr[0] * arr[1] * arr[n-1];
        return max(a,b);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna