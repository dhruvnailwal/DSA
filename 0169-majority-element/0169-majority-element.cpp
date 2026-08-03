class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        int ele = nums[0];
        int count = 0;

        for(int i = 0 ; i < n ; i++){
            if(count == 0){
                count = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele){
                count++;
            }
            else{
                count--;
            }
        }

        return ele;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna