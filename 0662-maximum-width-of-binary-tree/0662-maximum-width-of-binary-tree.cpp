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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*, unsigned long long>> q;

        q.push({root, 1});

        int ans = 0;

        while (!q.empty()) {

            int n = q.size();
            unsigned long long f = q.front().second;
            unsigned long long b = q.back().second;
            
            ans = max(ans,(int)(b-f+1));

            while (n--) {
                auto it = q.front();

                q.pop();

                unsigned long long idx = it.second;
                TreeNode* node = it.first;

                if (node->left) {
                    q.push({node->left, idx * 2});
                }
                if (node->right) {
                    q.push({node->right, idx * 2 + 1});
                }

            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna