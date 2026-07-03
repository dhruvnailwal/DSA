class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        map<char, int> mp;

        for (auto i : p) {
            mp[i]++;
        }

        int i = 0, j = 0;
        vector<int> ans;
        int count = m;

        while (j < n) {
            if (mp.count(s[j])) {
                mp[s[j]]--;

                if (mp[s[j]] >= 0) {
                    count--;
                }
            }

            if (j - i + 1 > m) {
                if (mp.count(s[i])) {
                    mp[s[i]]++;

                    if (mp[s[i]] > 0)
                        count++;
                }
                i++;
            }
            
            if(j - i + 1 == m && count == 0){
                ans.push_back(i);
            }

            j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna