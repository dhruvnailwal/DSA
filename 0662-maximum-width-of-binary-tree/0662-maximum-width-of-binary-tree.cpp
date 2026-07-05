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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int ans = 0;
        queue<pair<TreeNode*,long long>> q;

        q.push({root,0});

        while(!q.empty()){
            long long mini = q.front().second;
            int size = q.size();

            int l,r;

            for(int i = 0 ; i < size;i++){
                long long idx = q.front().second - mini;
                TreeNode* temp = q.front().first;

                q.pop();

                if(i == 0) l = idx;
                if(i == size-1) r = idx;

                if(temp->left){
                    q.push({temp->left,idx * 2 + 1});
                }
                if(temp->right){
                    q.push({temp->right,idx * 2 + 2});
                }
            }
            ans = max(ans,r - l + 1);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna