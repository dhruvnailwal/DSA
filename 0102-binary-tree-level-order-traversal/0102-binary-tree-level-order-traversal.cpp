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
    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int,vector<int>> mp;

        queue<pair<TreeNode*,int>> q;

        if(root == NULL) return {};

        q.push({root,0});

        while(!q.empty()){
            auto it = q.front();
            q.pop();

            TreeNode* temp = it.first;
            int level = it.second;

            mp[level].push_back(temp->val);

            if(temp->left){
                q.push({temp->left,level+1});
            }
            if(temp->right){
                q.push({temp->right,level+1});
            }
        }

        vector<vector<int>> ans;

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna