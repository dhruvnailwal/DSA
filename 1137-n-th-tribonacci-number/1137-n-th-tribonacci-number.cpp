class Solution {
public:
    int tribonacci(int n) {

        vector<int> T(38);
        T[0] = 0;
        T[1] = 1;
        T[2] = 1;

        if(n <= 2){
            return T[n];
        }

        for(int i = 3 ; i <= n ; i++){
            T[i] = T[i-1] + T[i-2] + T[i-3];
        }

        return T[n];
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna