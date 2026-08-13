class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int s = 0 , e = n - 1;

        while(s <= e){

            int mid = (s+e)/2;

            if(nums[mid] == target) return mid;

            else if(nums[s] <= nums[mid]){
                if(target <= nums[mid] && nums[s] <= target){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }

            else{
                if(target >= nums[mid] && target <= nums[e]){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna