class Solution {
  public:
    bool isIntersect(vector<vector<int>> intervals) {
        //Code Here
        
        sort(intervals.begin(),intervals.end(),[](vector<int> &a , vector<int> &b){
            if(a[0] == b[0]) return a[1] > b[1];
            return a[0] < b[0];
        });
        int n = intervals.size();
        
        // sort(intervals.begin(),intervals.end());
        
        int a = intervals[0][0];
        int b = intervals[0][1];
        
        for(int i = 1 ; i < n ; i++){
            if(a <= intervals[i][1] && intervals[i][0] <= b){
                return true;
            }
            
            a = intervals[i][0];
            b = intervals[i][1];
        }
        
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna