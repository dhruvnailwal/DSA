class Solution {
public:
    string addBinary(string a, string b) {
        
        string ans = "";

        int n = a.size() , m = b.size();

        int diff = abs(m - n);

        if(n < m){
            for(int i = 0 ; i < diff ; i++){
                a = '0' + a;
            }
        }
        else if(m < n){
            for(int i = 0 ; i < diff ; i++){
                b = '0' + b;
            }
        }

        int k = a.size()-1;
        int carry = 0;

        while(k >= 0){
            int sum = (a[k] - '0') + (b[k] - '0') + carry;
            ans += (sum%2) + '0';
            carry = sum/2; 
            k--;
        }

        if(carry){
            ans += '1';
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna