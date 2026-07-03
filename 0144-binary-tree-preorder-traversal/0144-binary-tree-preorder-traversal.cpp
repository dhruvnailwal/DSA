/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* temp = root;

        while (temp) {
            if (temp->left == NULL) {
                ans.push_back(temp->val);
                temp = temp->right;
            }

            else {
                TreeNode* leftchild = temp->left;

                while (leftchild->right && leftchild->right != temp) {
                    leftchild = leftchild->right;
                }

                if (leftchild->right == NULL) {
                    ans.push_back(temp->val);
                    leftchild->right = temp;
                    temp = temp->left;
                } 
                
                else {
                    leftchild->right = NULL;
                    temp = temp->right;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna