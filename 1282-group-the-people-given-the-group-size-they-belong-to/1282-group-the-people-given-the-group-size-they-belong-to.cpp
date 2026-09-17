class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        int n = nums.size();

        map<int,vector<int>> mp;
        vector<vector<int>> ans;

        for(int i = 0 ; i < n ; i++){
            mp[nums[i]].push_back(i);

            if(mp[nums[i]].size() == nums[i]){
                ans.push_back(mp[nums[i]]);
                mp[nums[i]].clear();
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna