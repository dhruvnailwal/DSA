class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
        vector<int> st , et;

        for(auto i : intervals){
            st.push_back(i[0]);
            et.push_back(i[1]);
        }

        sort(st.begin(),st.end());
        sort(et.begin(),et.end());


        int i = 0 ; int ans = 0;

        for(auto time : st){
            if(time > et[i]){
                i++;
            }
            else{
                ans++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna