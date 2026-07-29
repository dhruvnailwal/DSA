class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        
        int n = s.size();

        int i = 0 , j = 0;

        map<char,int> mp;

        while(j < n){
            mp[s[j]]++;

            if(j - i + 1 == mp.size()){
                ans = max(ans,j - i + 1);
            }

            while(j - i + 1 > mp.size()){
                mp[s[i]]--;

                if(mp[s[i]] == 0) mp.erase(s[i]);

                i++;
            }

            j++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna