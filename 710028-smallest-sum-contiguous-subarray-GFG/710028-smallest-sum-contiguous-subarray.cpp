class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int j = 1;
        int mini = arr[0];
        int ans = arr[0];
        
        while(j < n){
            mini = min(arr[j],mini+arr[j]);
            ans = min(ans,mini);
            j++;
        }
        
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna