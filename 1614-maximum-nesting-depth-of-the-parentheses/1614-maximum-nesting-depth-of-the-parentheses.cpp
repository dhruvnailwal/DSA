class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count = 0;
        int maxi = 0;
        for(auto i : s){
            if(i == '('){
                count++;
            }
            else if(i == ')'){
                maxi = max(maxi,count);
                count -= 1;
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna