class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0 , curr = 0 , start = 0;

        int n = gas.size();

        for(int i = 0 ; i < n ; i++){

            int diff = gas[i] - cost[i];

            total += diff;
            curr += diff;

            if(curr < 0){
                curr = 0;
                start = i+1;
            }
        }

        return total >= 0 ? start : -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna