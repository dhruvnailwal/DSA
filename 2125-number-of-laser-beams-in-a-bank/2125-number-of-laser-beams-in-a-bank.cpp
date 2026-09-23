class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;

        for(auto i : bank){
            int c = 0;
            for(auto j : i){
                if(j == '1') c++;
            }
            if(c != 0) v.push_back(c);
        }        

        int n = v.size();
        int ans = 0;

        for(int i = 0 ; i < n - 1; i++){
            ans += v[i] * v[i+1];
        }


        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna