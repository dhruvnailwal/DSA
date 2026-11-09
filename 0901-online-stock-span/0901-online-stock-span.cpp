class StockSpanner {
public:
    stack<pair<int,int>> st; // Price Span
    StockSpanner() {
    }
    
    int next(int price) {

        int count = 1;

        while(!st.empty() && st.top().first <= price){
            count += st.top().second;
            st.pop();
        }

        st.push({price,count});

        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna