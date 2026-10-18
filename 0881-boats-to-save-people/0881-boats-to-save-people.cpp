class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());

        int i = 0 , j = n-1;
        int ans = 0;

        while(i <= j){
            if(people[i] + people[j] <= limit){
                ans++;
                i++;
                j--;
            }
            else{
                j--;
                ans++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna