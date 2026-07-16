class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0 , e = n-1;

        while(s <= e){
            int mid = (s+e)/2;

            if(arr[mid] == target) return mid;

            else if(arr[s] <= arr[mid]){
                if(target >= arr[s] && target <= arr[mid]){
                    e = mid - 1;
                }
                else{
                    s = mid + 1;
                }
            }
            else{
                if(target >= arr[mid] && target <= arr[e]){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna