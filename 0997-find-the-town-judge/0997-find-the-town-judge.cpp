class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n,0);

        for(auto i : trust){
            indegree[i[0]-1]--;
            indegree[i[1]-1]++;
        }

        for(int i = 0 ; i < n ; i++){
            if(indegree[i] == n-1) return i+1;
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna