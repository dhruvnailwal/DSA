class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& tasks) {

        sort(tasks.begin(),tasks.end());

        sort(pt.begin(),pt.end(),greater<int> ());
        
        int maxi = INT_MIN;

        int n = tasks.size();
        int j = 0;
        for(auto i : pt){

            int sum = 0;

            if(j == n-1) break;

            for(int k = 0 ; k < 4 ; k++){

                sum = max(sum , i + tasks[j++]);

            }

            maxi = max(maxi,sum);
        }

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna