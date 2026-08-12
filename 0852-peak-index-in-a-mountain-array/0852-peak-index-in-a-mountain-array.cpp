class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        int s = 0 , e = n - 1;

        while(s < e){
            int mid = (s + e) / 2;

            if(arr[mid] < arr[mid + 1]) s = mid + 1;

            else e = mid;
        }

        return e;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna