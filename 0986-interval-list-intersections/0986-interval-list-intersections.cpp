class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n = firstList.size();

        int i = 0, j = 0;

        vector<vector<int>> ans;

        if (firstList.size() == 0 || secondList.size() == 0)
            return ans;

        while (i < firstList.size() && j < secondList.size()) {

            int start = max(firstList[i][0], secondList[j][0]);
            int end = min(firstList[i][1], secondList[j][1]);

            if (start <= end)
                ans.push_back({start, end});

            if (firstList[i][1] < secondList[j][1])
                i++;
            else
                j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna