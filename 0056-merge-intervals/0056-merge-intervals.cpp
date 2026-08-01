class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(ans.back()[1] >= arr[i][0]){
                ans.back()[1] = max(arr[i][1],ans.back()[1]);
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna