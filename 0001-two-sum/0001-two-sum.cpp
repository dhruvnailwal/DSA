class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
    map<int, int> m;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int more = target - num;
        if (m.find(more) != m.end())
        {
            return {m[more],i};
        }
        m[num] = i;
    }
    return {-1,-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna