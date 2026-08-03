class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 , j = 0;
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> ans;

        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i++]);
            }
            else{
                ans.push_back(nums2[j++]);
            }
        }

        while(i < n){

            ans.push_back(nums1[i++]);
            
        }
        while(j < m){

            ans.push_back(nums2[j++]);

        }

        int s = ans.size();
        int a = s/2;
        
        if(s % 2 == 0){
            int b = a - 1;

            return (ans[a]+ans[b])/2.0;
        }
        
        return ans[a]/1.0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna