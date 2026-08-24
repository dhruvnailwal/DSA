/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        
        if(root == NULL) return {};

        map<int,int> mp;
        vector<int> ans;

        queue<pair<TreeNode* , int>> q;

        q.push({root,0});

        while(!q.empty()){

            auto it = q.front();
            q.pop();

            TreeNode* temp = it.first;
            int level = it.second;

            if(!mp.count(level)){
                mp[level] = temp->val; 
            }

            else{
                mp[level] = max(mp[level] , temp->val);
            }

            if(temp->left){
                q.push({temp->left , level + 1});
            }

            if(temp->right){
                q.push({temp->right , level + 1});
            }

        }

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna