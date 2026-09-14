class Solution {
public:
    bool isRectangleOverlap(vector<int>& rect1, vector<int>& rect2) {
        int fx1 = rect1[0] , fy1 = rect1[1] , fx2 = rect1[2] , fy2 = rect1[3];

        int sx1 = rect2[0] , sy1 = rect2[1] , sx2 = rect2[2] , sy2 = rect2[3];

        if(sx1 >= fx2 || sx2 <= fx1 || sy1 >= fy2 || sy2 <= fy1) return false;

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna