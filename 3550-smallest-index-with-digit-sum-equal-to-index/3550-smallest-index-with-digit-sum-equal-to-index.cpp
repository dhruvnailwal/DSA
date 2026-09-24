class Solution {
public:
    int conv(int n){
        int sum = 0;

        while(n > 0){
            int rem = n % 10;
            sum += rem;
            n /= 10;
        }

        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(i == conv(nums[i])) return i;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna