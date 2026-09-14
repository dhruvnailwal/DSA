class Solution {
public:
    string conv(int n){
        string ans = "";

        while(n > 0){
            int rem = n % 2;
            ans += rem + '0';
            n /= 2;
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }

    string convertDateToBinary(string date) {
        string year = date.substr(0,4);
        string month = date.substr(5,2);
        string taarik = date.substr(8,2);

        int y = stoi(year);
        int m = stoi(month);
        int t = stoi(taarik);

        year = conv(y);
        month = conv(m);
        taarik = conv(t);

        return year + '-' + month + '-' + taarik;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna