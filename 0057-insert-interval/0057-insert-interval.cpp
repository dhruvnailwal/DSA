class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;

        intervals.push_back(newInterval);

        int n = intervals.size();

        sort(intervals.begin(),intervals.end());

        ans.push_back(intervals[0]);

        for(int i = 1 ; i < n ; i++){
            int a = ans.back()[0];
            int b = ans.back()[1];

            if(b >= intervals[i][0]){
                cout<<"Else - If Visited \n";
                ans.pop_back();
                ans.push_back({min(intervals[i][0],a),max(intervals[i][1],b)});
            }
            else{
                cout<<"Else Visited \n";
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna