class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<int, vector<int>, greater<int>> pq; //maxheap;

        for(auto i : arr){
            if(k > 0){
                pq.push(i);
                k--;
            }
            else if(abs(pq.top() - x) > abs(i - x)){
                pq.pop();
                pq.push(i);
            }
        }
        
        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna