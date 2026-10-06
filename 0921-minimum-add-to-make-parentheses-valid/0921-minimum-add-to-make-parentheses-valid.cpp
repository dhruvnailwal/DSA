class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        int count = 0;
        int count2 = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                count++;
            }
            else{
                if(count>0){
                count--;
                }
                else{
                    count2++;
                }
            }
        }
        return count+count2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna