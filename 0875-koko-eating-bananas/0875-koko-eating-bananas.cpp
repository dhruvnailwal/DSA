class Solution {
public:
    long long solve(vector<int> &arr,int h,int k){
        long long count = 0;
        for(auto i : arr){
            count += (i + k - 1) / k;
        }

        return count;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = arr.size();
        int s = 1;
        int e = *max_element(arr.begin(),arr.end());

        while(s <= e){
            int mid = (s+e)/2;

            long long res = solve(arr,h,mid);

            if(res <= h){
                e = mid - 1;
            }

            else{
                s = mid + 1;
            }
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna