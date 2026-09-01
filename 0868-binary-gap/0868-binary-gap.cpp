class Solution {
public:
    string binary(int n) {
        string ans = "";
        
        while (n > 0) {
            int rem = n % 2;
            ans += rem + '0';
            n = n / 2;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
    int binaryGap(int n) {

        string a = binary(n);

        cout<<a<<endl;

        int s = a.size();

        int maxi = 0;

        for (int i = 0; i < s - 1; i++) {

            if (a[i] == '1') {

                for (int j = i + 1; j < s; j++) {

                    if(a[j] == '1'){
                        maxi = max(maxi , j - i);
                        break;
                    }
                }
            }
        }

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna