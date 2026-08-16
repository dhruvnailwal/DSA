class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int flower) {
        int n = flowerbed.size();

        for(int i = 0 ; i < n ; i++){
            if(i == 0 && flowerbed[i] == 0 && (i + 1 == n || flowerbed[i+1] == 0)){
                flowerbed[i] = 1;
                flower--;
            }
            else if(i == n-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0){
                flowerbed[i] = 1;
                flower--;
            }
            else if(i > 0 && i + 1 < n && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0){
                flowerbed[i] = 1;
                flower--;
            }
            else continue;
        }

        return flower <= 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna