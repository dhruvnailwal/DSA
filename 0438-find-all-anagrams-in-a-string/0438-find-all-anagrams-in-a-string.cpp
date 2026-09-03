class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int n = s.size();
        vector<int> ans;

        map<char,int> mp1;
        map<char,int> mp2;

        for(auto i : p) mp1[i]++;

        int i = 0 , j = 0;

        while(j < n){

            mp2[s[j]]++;

            while(j - i + 1 > p.size()){
                mp2[s[i]]--;

                if(mp2[s[i]] == 0) {
                    mp2.erase(s[i]);
                }

                i++;
            }
            
            
            if(j - i + 1 == p.size() && mp1 == mp2){
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