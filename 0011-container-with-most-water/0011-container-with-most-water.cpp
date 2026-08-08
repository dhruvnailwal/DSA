class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();

        int i = 0 , j = n-1;
        
        int maxi = INT_MIN;

        while(i < j){
            
            maxi = max(maxi,min(arr[i],arr[j]) * (j-i));

            if(arr[i] <= arr[j]) i++;

            else j--;
        }

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna