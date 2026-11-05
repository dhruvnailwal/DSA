class Solution {
public:
    int trap(vector<int>& arr) {
        int i = 0 ;
        int j = arr.size()-1;
        int ans = 0;

        int left_max = INT_MIN;
        int right_max = INT_MIN;

        while(i <= j){

            if(arr[i] <= arr[j]){
                if(arr[i] >= left_max){
                    left_max = arr[i];
                }
                else{
                    ans += left_max - arr[i];
                }
                i++;
            }
            
            else{
                if(arr[j] >= right_max){
                    right_max = arr[j];
                }
                else{
                    ans += right_max - arr[j];
                }
                j--;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna