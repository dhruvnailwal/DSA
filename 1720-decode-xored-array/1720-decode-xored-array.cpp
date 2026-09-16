class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;

        ans.push_back(first);
        
        for(auto i : encoded){
            ans.push_back(ans.back()^i);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna