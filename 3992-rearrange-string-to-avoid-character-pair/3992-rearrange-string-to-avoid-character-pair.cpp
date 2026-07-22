class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans = "";
        for(auto i : s){
            if(i == y) ans += i;
        }

        for(auto i : s){
            if(i != y) ans += i;
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna