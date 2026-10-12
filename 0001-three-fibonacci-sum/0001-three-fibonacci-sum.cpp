class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n == 0 || n == 2) return true;

        long long first = 0;
        long long second = 1;
        
        for(int i = 2 ; i < n ; i++){
            long long third = first + second;
            
            if((first + second + third) == n) return true;

            if((first + second + third) > n) return false;

            first = second;
            second = third;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna