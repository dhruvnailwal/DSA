class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        int depth = 0;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '(') depth++;
            else{
                depth--;
                if(s[i-1] == '('){
                    ans += (1 << depth);  //this add 2^depth to the answer 
                }
            }
        }   

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna