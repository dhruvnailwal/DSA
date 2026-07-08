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
    TreeNode* solve(vector<int> &postorder,vector<int> &inorder,int start,int end,int &idx){
        if(start > end) return NULL;

        int rootval = postorder[idx];
        idx--;

        int i = start;
        while(i <= end){
            if(inorder[i] == rootval) break;
            i++;
        }

        TreeNode* root = new TreeNode(rootval);
        root->right = solve(postorder,inorder,i+1,end,idx);
        root->left = solve(postorder,inorder,start,i-1,idx);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        int n = inorder.size();
        int idx = n-1;

        return solve(postorder,inorder,0,n-1,idx);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna