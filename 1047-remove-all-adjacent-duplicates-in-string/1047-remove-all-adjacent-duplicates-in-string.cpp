class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;

        for (int i = 0; i < n; i++) {
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna