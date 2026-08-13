class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;

        for(auto i : operations){

            if(i == "++X" || i == "X++") X++;
            
            else X--;

        }

        return X;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna