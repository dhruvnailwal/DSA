class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;

        for(auto i : s){
            mp[i]++;
        }

        priority_queue<pair<int,char>> max_heap;

        for(auto it : mp){
            max_heap.push({it.second , it.first});
        }

        string ans = "";

        while(!max_heap.empty()){
            auto it = max_heap.top();
            max_heap.pop();

            int sizee = it.first;
            char ch = it.second;

            for(int i = 0 ; i < sizee ; i++){
                ans += ch;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna