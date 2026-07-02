class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0);

        for(auto i : s){
            freq[i - 'a']++;
        }

        for(auto i : t){
            if(freq[i - 'a'] == 0) return false;
            freq[i-'a']--;
        }

        for(auto i : freq){
            if(i >= 1) return false;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna