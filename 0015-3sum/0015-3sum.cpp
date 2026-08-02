class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int n = nums.size();
        vector<vector<int>> ans;

        map<vector<int>,int> mp;

        for(int i = 0 ; i < n - 2 ; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int more = 0 - nums[i];
            int s = i + 1;
            int e = n - 1;

            while(s < e){
                if(nums[s] + nums[e] == more){

                    // if(!mp.count({nums[s],nums[e],nums[i]})){
                    //     ans.push_back({nums[s],nums[e],nums[i]});
                    //     mp[{nums[s],nums[e],nums[i]}]++;
                    // }

                    ans.push_back({nums[s],nums[e],nums[i]});

                    while(s < e && nums[s] == nums[s+1]) s++;
                    while(s < e && nums[e] == nums[e-1]) e--;
                    
                    s++;
                    e--;
                }

                else if(nums[s] + nums[e] < more){
                    s++;
                }
                else{
                    e--;
                }
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna