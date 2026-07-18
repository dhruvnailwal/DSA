class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        priority_queue<pair<int,int>> max_heap;

        map<int,int> mp;

        for(auto i : nums) mp[i]++;

        for(auto it : mp){
            max_heap.push({it.second,it.first});
        }

        vector<int> ans;

        while(k--){
            auto it = max_heap.top();
            max_heap.pop();

            ans.push_back(it.second);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna