class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int first = -1 , last = -1;

        int n = arr.size();

        int s = 0 , e = n - 1;

        while(s <= e){
            int mid = (s+e)/2;

            if(arr[mid] == target){
                last = mid;
                s = mid+1;
            }
            else if(arr[mid] < target){
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }

        s = 0;
        e = n-1;

        while(s <= e){
            int mid = (s+e)/2;

            if(arr[mid] == target ){
                first = mid;
                e = mid-1;
            }
            else if(arr[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }

        return {first,last};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna