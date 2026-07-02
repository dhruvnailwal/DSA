class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mp;

        for(auto i : t){
            mp[i]++;
        }

        int n = s.size();
        int i = 0 , j = 0;

        int mini = INT_MAX;
        int start = 0;
        int m = t.size();

        int count = m;

        while(j < n){
            if(mp.count(s[j])){
                mp[s[j]]--;

                if(mp[s[j]] >= 0) count--;
            }

            while(count == 0){
                if(j - i + 1 < mini){
                    mini = j - i + 1;
                    start = i;
                }

                if(mp.count(s[i])){
                    mp[s[i]]++;

                    if(mp[s[i]] > 0) count++;
                }

                i++;
            }
            j++;
        }

        if(mini == INT_MAX) return "";

        return s.substr(start,mini);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna