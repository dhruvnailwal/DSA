class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string ans = "";

        for(auto i : s){

            if(i == ')'){
                queue<char> temp;
                while(st.top() != '('){
                    temp.push(st.top());
                    st.pop();
                }

                st.pop();

                while(!temp.empty()){
                    st.push(temp.front());
                    temp.pop();
                }
            }

            else{
                st.push(i);
            }
            
        }

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