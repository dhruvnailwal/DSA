class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        map<string,vector<string>> mp;

        for(auto i : strs){
            string a = i;
            sort(a.begin(),a.end());

            mp[a].push_back(i);
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna