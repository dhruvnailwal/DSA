class Solution {
public:
    void solve(int n, int prev , string temp, vector<string>& v) {
        if (temp.size() == n) {
            v.push_back(temp);
            return;
        }

        if (prev == -1 || prev == 1) {
            temp.push_back('0');
            solve(n , 0 , temp , v);
            temp.pop_back();
        }

        temp.push_back('1');
        solve(n , 1 , temp , v);
        temp.pop_back();
    }

    vector<string> validStrings(int n) {
        vector<string> v;

        solve(n, -1 , "" , v);

        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna