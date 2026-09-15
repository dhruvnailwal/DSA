class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k == 1) return s;

        string ans = "";

        for(int i = k - 1 ; i >= 0 ; i--){
            ans += s[i];
        }

        for(int i = k ; i < s.size() ; i++){
            ans += s[i];
        }

        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna