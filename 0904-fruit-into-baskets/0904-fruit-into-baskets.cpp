class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int maxi = INT_MIN;
        int n = fruits.size();

        map<int,int> mp;
 
        int i = 0 , j = 0;

        while(j < n){
            mp[fruits[j]]++;

            while(mp.size() > 2){
                mp[fruits[i]]--;

                if(mp[fruits[i]] == 0) mp.erase(fruits[i]);

                i++;
            }
            if(mp.size() <= 2){
                int count = 0;
                for(auto it : mp) count += it.second;

                maxi = max(maxi,count);
            }

            j++;
        }

        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna