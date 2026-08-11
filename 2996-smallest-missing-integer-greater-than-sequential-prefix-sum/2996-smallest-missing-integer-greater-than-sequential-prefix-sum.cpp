class Solution {
public:
    int missingInteger(vector<int>& nums) {
        map<int,int> mp;

        for(auto i : nums) mp[i]++;

        int n = nums.size();

        int sum = nums[0] ;

        for(int i = 1 ; i < n ; i++){
            if(nums[i] == 1 + nums[i-1]){
                sum += nums[i];
            }
            else{
                break;
            }
        }

        while(mp.count(sum)){
            sum++;
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna