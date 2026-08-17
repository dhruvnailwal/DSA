class Solution {
public:
    bool solve(string s, string w) {
        int i = 0, j = 0;

        while (i < s.size() && j < w.size()) {

            if (s[i] != w[j])
                return false;

            int SI = i;

            while (i < s.size() && s[i] == s[SI])
                i++;

            int cs = i - SI;

            int SJ = j;

            while (j < w.size() && w[j] == w[SJ])
                j++;

            int cw = j - SJ;

            if (cw > cs)
                return false;

            if (cw != cs && cs < 3)
                return false;

        }

        return i == s.size() && j == w.size();
    }

    int expressiveWords(string s, vector<string>& words) {

        int ans = 0;

        for (auto& w : words) {
            if (solve(s, w))
                ans++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna