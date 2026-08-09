class Solution {
public:
    int compress(vector<char>& chars) {
        char ch = chars[0];

        int n = chars.size();
        int count = 0 ;

        string s = "";

        for(int i = 0 ; i < n ; i++){
            if(chars[i] == ch){
                count++;
            }
            else{
                s += ch;
                if(count != 1) s += to_string(count);
                ch = chars[i];
                count = 1;
            }
        }

        if(count){
            s += ch;
            if(count != 1) s += to_string(count);
        }

        for(int i = 0 ; i < s.size() ; i++){
            chars[i] = s[i];
        }

        return s.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna