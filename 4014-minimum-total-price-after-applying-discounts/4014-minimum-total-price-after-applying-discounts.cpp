class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {

        sort(prices.begin(),prices.end(),greater<int>());

        sort(discounts.begin(),discounts.end(),greater<int>());

        int n = prices.size() , m = discounts.size();

        int i = 0 , j = 0;
        double ans = 0.0;

        while(i < n && j < m){
            ans += (prices[i] * (100 - discounts[j]))/100.0;
            i++;
            j++;
        }

        while(i < n){
            ans += prices[i];
            i++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna