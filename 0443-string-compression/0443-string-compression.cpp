class Solution {
public:
    int compress(vector<char>& chars) {

        int n = chars.size();

        char ch = chars[0];
        int k = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (chars[i] == ch) {
                count++;
            } else {

                chars[k++] = ch;

                if (count > 1 && count < 10) {
                    chars[k++] = count + '0';
                } 
                
                else if (count >= 10) {
                    string s = to_string(count);
                    for (auto i : s) {
                        chars[k++] = i;
                    }
                }

                ch = chars[i];
                count = 1;
            }
        }

        chars[k++] = ch;

        if (count > 1 && count < 10) {
            chars[k++] = count + '0';
        } 
        
        else if (count >= 10) {
            string s = to_string(count);
            for (auto i : s) {
                chars[k++] = i;
            }
        }

        return k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna