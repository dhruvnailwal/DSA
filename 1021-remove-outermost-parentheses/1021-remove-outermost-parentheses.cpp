class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int count = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                if(count > 0){
                    ans += s[i];
                }
                count++;
            }
            else if (s[i] == ')') {
                count--;
                if(count > 0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna