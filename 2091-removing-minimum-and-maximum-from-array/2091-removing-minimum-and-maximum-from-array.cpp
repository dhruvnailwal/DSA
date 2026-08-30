class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return 1;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        int min_idx , max_idx ;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                max_idx = i;
            }

            if(nums[i] < mini){
                mini = nums[i];
                min_idx = i;
            }
        }

        // cout<<"Maxi :- "<<maxi<<" with index :- "<<max_idx<<endl;
        // cout<<"Mini :- "<<mini<<" with index :- "<<min_idx<<endl;

        int ans = INT_MAX;

        if(min_idx < max_idx){

            int a = (min_idx - 0 + 1) + (n - max_idx); //Ek aage se Ek peeche se
            int b = max_idx - 0 + 1; //Sirf aage se 
            int c = n - min_idx ; //Sirf peeche se 

            ans = min(a , min(b , c));
        }

        else{

            int a = (max_idx - 0 + 1) + (n - min_idx); //Ek aage se Ek peeche se
            int b = min_idx - 0 + 1; //Sirf aage se
            int c = n - max_idx ; //Sirf peeche se

            // cout<<a<<" "<<b<<" "<<c;
            ans = min(a , min(b , c));
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna