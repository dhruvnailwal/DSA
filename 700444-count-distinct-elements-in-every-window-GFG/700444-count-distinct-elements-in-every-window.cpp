class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        int i = 0 , j = 0;
        
        map<int,int> mp;
        vector<int> ans;
        
        while(j < n){
            mp[arr[j]]++;
            
            while(j - i + 1 > k){
                mp[arr[i]]--;
                
                if(mp[arr[i]] == 0) mp.erase(arr[i]);
                
                i++;
            }
            
            if(j - i + 1 == k){
                
                ans.push_back(mp.size());
                
            }
            
            
            j++;
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna