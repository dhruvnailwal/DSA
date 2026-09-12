class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int start , set<vector<int>> &st) {

        if (start == nums.size()) {

            if(!st.count(nums)){
                ans.push_back(nums);
                st.insert(nums);
            }

            return;
        }

        for(int i = start ; i < nums.size() ; i++){

            swap(nums[i],nums[start]);
            solve(nums,start + 1 , st);
            swap(nums[i],nums[start]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        set<vector<int>> st;

        solve(nums,0,st);

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna