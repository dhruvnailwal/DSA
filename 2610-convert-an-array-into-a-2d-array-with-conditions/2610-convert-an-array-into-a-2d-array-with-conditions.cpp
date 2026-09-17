class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        unordered_map<int,set<int>> mp;


        for(auto i : nums){
            
            int row = 0;

            while(mp[row].find(i) != mp[row].end()) row++;

            mp[row].insert(i);

        }

        vector<vector<int>> ans;

        for(auto &i : mp){

            vector<int> temp(i.second.begin(),i.second.end());
            ans.push_back(temp);

        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna