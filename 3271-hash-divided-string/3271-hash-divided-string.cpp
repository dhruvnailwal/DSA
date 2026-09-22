class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        int c = 0 , sum = 0;
        string ans = "";

        for(int i = 0 ; i < n ; i++){

            sum += s[i] - 'a';
            c++;

            if(c == k){
                ans += (sum % 26) + 'a';
                sum = 0;
                c = 0;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna