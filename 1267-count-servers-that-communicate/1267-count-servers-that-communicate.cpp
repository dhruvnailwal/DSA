class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> server_row(n,0);
        vector<int> server_col(m,0);

        int count = 0;

        for(int i = 0 ; i < n ; i++){
            count = 0;
            for(int j = 0; j < m ; j++){
                if(grid[i][j] == 1){
                    count++;
                }
            }
            server_row[i] = count;
        }


        for(int j = 0 ; j < m ; j++){
            count = 0;
            for(int i = 0; i < n ; i++){
                if(grid[i][j] == 1){
                    count++;
                }
            }
            server_col[j] = count;
        }
        

        for(auto i : server_row) cout<<i<<" ";
        cout<<endl;
        for(auto i : server_col) cout<<i<<" ";

        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1 && (server_row[i] > 1 || server_col[j] > 1)){
                    ans++;
                }
            }
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna