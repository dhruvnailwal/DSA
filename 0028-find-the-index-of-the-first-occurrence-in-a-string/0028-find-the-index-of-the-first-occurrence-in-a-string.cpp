class Solution {
public:
    vector<int> LPS(string& s) {
        int n = s.size();

        int j = 0;

        vector<int> v(n);

        v[0] = 0;

        for (int i = 1; i < n;) {
            if (s[i] == s[j]) {
                j++;
                v[i] = j;
                i++;
            } else {
                if (j != 0) {
                    j = v[j - 1];
                } else {
                    v[i] = 0;
                    i++;
                }
            }
        }

        return v;
    }
    int strStr(string s, string pat) {
        int n = s.size();
        int m = pat.size();

        vector<int> lps = LPS(pat);

        int i = 0;
        int j = 0;

        while (i < n) {
            if (s[i] == pat[j]) {
                i++;
                j++;

                if (j == m)
                    return i - m;
            } else {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }

        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna