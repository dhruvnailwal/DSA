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
    long long mini1 = LLONG_MAX , mini2 = LLONG_MAX;
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        if(root->val < mini1){
            mini2 = mini1;
            mini1 = root->val;
        }
        else if(root->val < mini2 && root->val != mini1){
            mini2 = root->val;
        }
        inorder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {

        inorder(root);
        return mini2 == LLONG_MAX ? -1 : mini2; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna