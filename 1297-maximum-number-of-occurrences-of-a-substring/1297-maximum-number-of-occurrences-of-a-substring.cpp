class Solution {
public:
    int maxFreq(string s, int maxletters, int minsize, int maxsize) {

        int n = s.size();

        int i = 0, j = 0, ans = 0;

        unordered_map<char, int> mp;
        unordered_map<string, int> freq;

        while (j < n) {
            mp[s[j]]++;

            if (j - i + 1 > minsize) {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }

            if (j - i + 1 == minsize && mp.size() <= maxletters) {
                string temp = s.substr(i, minsize);
                freq[temp]++;
                ans = max(ans, freq[temp]);
            }

            j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna