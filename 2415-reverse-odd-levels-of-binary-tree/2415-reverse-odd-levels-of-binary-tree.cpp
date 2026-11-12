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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        int level = 0;

        while (!q.empty()) {
            int n = q.size();
            vector<TreeNode*> v;

            while (n--) {
                auto Node = q.front();
                q.pop();

                if (Node->left) {
                    q.push(Node->left);
                    v.push_back(Node->left);
                }
                if (Node->right) {
                    q.push(Node->right);
                    v.push_back(Node->right);
                }
            }

            if(level % 2 == 0){
                int i = 0;
                int j = v.size() - 1;

                while(i < j){
                    swap(v[i]->val,v[j]->val);
                    i++;
                    j--;
                }
            }

            level++;
        }

        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna