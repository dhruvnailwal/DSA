class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int mid = 0;
        while(s<=e){
            mid = (s+e)/2;
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid]>target){
               e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna