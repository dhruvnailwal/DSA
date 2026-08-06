class Solution {
  public:
    int setBits(int n) {
        // Code here
        int ans = 0;
        while(n){
            
            if(n & 1 == 1) ans++;
            
            n >>= 1;
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna