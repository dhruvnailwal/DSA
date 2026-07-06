class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(),[](vector<int>& a, vector<int>& b) {
                if (a[0] == b[0])
                    return a[1] > b[1];
                return a[0] < b[0];
            });
        int n = intervals.size();

        ans.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {
            if (ans.back()[1] >= intervals[i][0] &&
                ans.back()[1] >= intervals[i][1]) {
                continue;
            } else {
                ans.push_back(intervals[i]);
            }
        }

        return ans.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna