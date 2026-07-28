class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1){
            return s;
        }
        map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        string ans = "";
        string mid = "";
        for(auto i : mp){
            if(i.second % 2 == 0){
                int a = i.second/2;
                while(a--){
                    ans += i.first;
                }
            }
            else if(mid == ""){
                mid = i.first;
                int a = i.second/2;
                while(a--){
                    ans += i.first;
                }
            }
        }
        string temp = ans;
        reverse(temp.begin(),temp.end());
        return ans+mid+temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna