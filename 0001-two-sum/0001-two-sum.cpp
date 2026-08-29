class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();
        map<int,int> mp;    

        for(int i = 0 ; i < n ; i++){
            
            int num = nums[i];
            int more = target - nums[i];

            if(mp.count(more)){
                return {i , mp[more]};
            }

            mp[num] = i;
        }

        return {-1,-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna