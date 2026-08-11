class Solution {
public:
    bool isvowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    int countVowelSubstrings(string word) {

        map<char,int> mp;

        int n = word.size();

        int i = 0;

        int ans = 0;

        for(int j = 0 ; j < n ; j++){

            if(!isvowel(word[j])){
                mp.clear();
                i = j + 1;
                continue;
            }

            mp[word[j]] = j;

            if(mp.size() == 5){

                int mini = n;

                mini = min(mini,mp['a']);
                mini = min(mini,mp['e']);
                mini = min(mini,mp['i']);
                mini = min(mini,mp['o']);
                mini = min(mini,mp['u']);

                ans += mini - i + 1; 
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna