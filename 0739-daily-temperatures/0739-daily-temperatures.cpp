class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int> st;
        vector<int> ans;

        int n = arr.size();
        ans.push_back(0);
        st.push(n-1);

        for(int i = n-2; i >= 0 ; i--){
            while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
            if(st.empty()) ans.push_back(0);
            else ans.push_back(st.top() - i);

            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna