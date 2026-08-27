class Solution {
public:
    int arrangeCoins(int n) {

        int row = 1;

        while(true){

            if(n < row){

                break;

            }

            n -= row;

            row++;
        }

        return row - 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna