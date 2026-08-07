class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(vector<int>& v : arr){
            reverse(v.begin(),v.end());
        }
        return;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna