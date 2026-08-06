class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {

        int n = s.size();

        vector<int> candles;
        for (int i = 0; i < n; i++) {
            if (s[i] == '|')
                candles.push_back(i);
        }

        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (s[i] == '*');
        }

        vector<int> ans;

        for (auto &it : queries) {

            int lq = it[0];
            int rq = it[1];

            int left = -1, right = -1;

            int low = 0, high = candles.size() - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (candles[mid] >= lq) {
                    left = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            low = 0;
            high = candles.size() - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (candles[mid] <= rq) {
                    right = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (left == -1 || right == -1 || left > right) {
                ans.push_back(0);
            } else {
                int leftPos = candles[left];
                int rightPos = candles[right];

                ans.push_back(prefix[rightPos] - prefix[leftPos]);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna