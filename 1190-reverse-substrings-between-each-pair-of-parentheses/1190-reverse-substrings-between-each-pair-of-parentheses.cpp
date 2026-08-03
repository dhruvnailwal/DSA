class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.length();
        stack<int>st;
        string res="";
        for(char ch:s)
        {
            if(ch=='(')
            {
                st.push(res.length());
            }
            else if(ch>='a' && ch<='z')
            {
                res+=ch;
            }
            else
            {
                int l=st.top();
                st.pop();
                reverse(res.begin()+l,res.end());
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna