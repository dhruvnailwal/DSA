class Solution {
public:

    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int sr,int sc,int inicolor,int color ,int delrow[],int delcol[]){
        ans[sr][sc] = color;

        int n = image.size();
        int m = image[0].size();

        for(int i = 0 ; i < 4 ; i++){
            int nrow = sr + delrow[i];
            int ncol = sc + delcol[i];

            if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m && ans[nrow][ncol] != color && image[nrow][ncol] == inicolor){
                dfs(image,ans,nrow,ncol,inicolor,color,delrow,delcol);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image;
        int inicolor = image[sr][sc];

        int delrow[] = {1,0,-1,0};
        int delcol[] = {0,1,0,-1};

        dfs(image,ans,sr,sc,inicolor,color,delrow,delcol);

        return ans; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna