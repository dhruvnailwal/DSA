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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int, int>>> q;
        map<int, map<int, multiset<int>>> mp;
        if (root == NULL)
            return ans;

        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            TreeNode* temp = it.first;
            int level = it.second.first;
            int line = it.second.second;

            mp[line][level].insert(temp->val);

            if (temp->left) {
                q.push({temp->left, {level + 1, line - 1}});
            }

            if (temp->right) {
                q.push({temp->right, {level + 1, line + 1}});
            }
        }

        for (auto i : mp) {
            vector<int> v;
            for(auto j : i.second){
                for(auto k : j.second){
                    v.push_back(k);
                }
            }
            ans.push_back(v);
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna