class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        int n = students.size();

        for (int i = 0; i < n; i++) {
            st.push(sandwiches[n - i - 1]);
            q.push(students[i]);
        }

        int count = 0, rotate = 0;

        while (!q.empty() && !st.empty() && rotate < q.size()) {

            if (q.front() == st.top()) {

                q.pop();
                st.pop();
                count++;
                rotate = 0;
            } else {

                q.push(q.front());
                q.pop();
                rotate++;
            }
        }

        return n - count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna