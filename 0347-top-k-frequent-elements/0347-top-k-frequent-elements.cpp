class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;

        map<int,int> mp;

        for(auto i : nums){
            mp[i]++;
        }

        for(auto i : mp){
            pq.push({i.second,i.first});

            if(pq.size() > k) pq.pop();
        }

        vector<int> ans;

        while(!pq.empty()){
            auto it = pq.top();

            ans.push_back(it.second);

            pq.pop();
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna