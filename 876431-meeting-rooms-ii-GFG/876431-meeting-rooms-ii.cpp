class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int n = start.size();
        int i = 0, j = 0;
        int room = 0 , ans = 0;
        
        while(i < n){
            if(start[i] < end[j]){
                room++;
                ans = max(ans,room);
                i++;
            }
            else{
                room--;
                j++;
            }
        }
        
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna