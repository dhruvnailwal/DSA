class Solution {
public:
    int countAsterisks(string s) {

        int ans = 0;

        bool inside = false;

        for(auto i : s){
            if(i == '|' && (inside || !inside)){
                inside = !inside;
            }
            else if(i == '*' && !inside){
                ans++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna