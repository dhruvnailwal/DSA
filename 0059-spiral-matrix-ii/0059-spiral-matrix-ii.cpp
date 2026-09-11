class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n , vector<int> (n));

        int num = 1;

        int top = 0 , left = 0;
        int bottom = n - 1 , right = n - 1;

        while(top <= bottom){

            for(int i = left ; i <= right ; i++){
                ans[top][i] = num;
                num++;
            }
            top++;

            for(int i = top ; i <= bottom ; i++){
                ans[i][right] = num;
                num++;
            }
            right--;

            if(left <= right){
                for(int i = right ; i >= left ; i--){
                    ans[bottom][i] = num;
                    num++;
                }
                bottom--;
            }

            if(top <= bottom){
                for(int i = bottom ; i >= top ; i--){
                    ans[i][left] = num;
                    num++;
                }
                left++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna