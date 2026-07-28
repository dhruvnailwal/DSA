class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;

        for(auto i : nums){
            v.push_back(to_string(i));
        }

        sort(v.begin(),v.end(),[](string a , string b){
            return a + b > b + a;
        });

        if(v[0] == "0") return "0";

        string ans = "";

        for(auto i : v){
            ans += i;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna