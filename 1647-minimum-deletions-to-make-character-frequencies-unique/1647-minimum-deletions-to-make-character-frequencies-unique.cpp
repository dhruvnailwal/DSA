class Solution {
public:
    int minDeletions(string s) {
        vector<pair<int, int>> v;

        map<char, int> mp;

        for (auto i : s) {
            mp[i]++;
        }

        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }

        map<int, int> mp2;

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        int ans = 0;

        for (auto it : v) {

            if (!mp2.count(it.first)) {
                mp2[it.first]++;
            }

            else {
                while (it.first > 0 && mp2.count(it.first)) {
                    it.first--;
                    ans++;
                }
                mp2[it.first]++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna