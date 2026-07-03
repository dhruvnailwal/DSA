class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp;
        for(auto i : s1){
            mp[i]++;
        }

        int n = s2.size();
        int m = s1.size();
        int i = 0 , j = 0;
        int count = s1.size();

        while(j < n){
            if(mp.count(s2[j])){
                mp[s2[j]]--;

                if(mp[s2[j]] >= 0){
                    count--;
                }            
            }

            if(j - i + 1 > m){
                if(mp.count(s2[i])){
                    mp[s2[i]]++;
                    if(mp[s2[i]] > 0)
                        count++;
                }
                i++;
            }

            if(j - i + 1 == m && count == 0) return true;

            j++;
        }

        return false ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna