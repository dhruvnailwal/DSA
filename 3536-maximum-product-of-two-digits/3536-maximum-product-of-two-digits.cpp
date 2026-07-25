class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        int first = 0;
        int second = 0;
        while(n > 0){
            int rem = n % 10;
            if(rem >= first){
                second = first;
                first = rem;
            }

            else if(rem < first && rem >= second){
                second = rem;
            }

            n /= 10;
        }

        return first*second;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna