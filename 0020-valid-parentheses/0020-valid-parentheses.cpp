class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(auto i : s){
            if(i == ']' && !st.empty() && st.top() == '['){
                st.pop();
            }
            else if(i == '}' && !st.empty() && st.top() == '{'){
                st.pop();
            }
            else if(i == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else{
                st.push(i);
            }
        }

        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna