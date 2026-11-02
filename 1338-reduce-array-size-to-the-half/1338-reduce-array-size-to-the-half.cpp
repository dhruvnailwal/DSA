class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;

        for(auto i : arr){
            mp[i]++;
        }

        priority_queue<pair<int,int> , vector<pair<int,int>>> pq;

        for(auto it : mp){
            pq.push({it.second,it.first});
        }

        int n = arr.size();
        int org = n;

        int ans = 0;

        while(n > (org/2)){
            auto it = pq.top();
            pq.pop();

            n -= it.first;
            ans++;
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna