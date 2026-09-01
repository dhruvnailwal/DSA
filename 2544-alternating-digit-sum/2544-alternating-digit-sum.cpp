class Solution {
public:
    int alternateDigitSum(int n) {
        
        int ans = 0;
        
        string s = to_string(n);
        
        int flag = 1;
        
        for(auto i : s){
            ans += flag * (i - '0');
            flag = 0 - flag;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna