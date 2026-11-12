class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int , vector<int> > pq;

        map<int,int> mp;

        for(auto i : arr){
            mp[i]++;
        }

        for(auto it : mp){
            pq.push(it.second);
        }

        int n = arr.size();
        int org = n;
        int ans = 0;

        while(2 * n > org){
            n -= pq.top();
            pq.pop();
            ans++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna