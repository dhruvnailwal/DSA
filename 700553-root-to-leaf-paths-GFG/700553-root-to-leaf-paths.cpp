/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> ans;
    
    void solve(Node* root,vector<int> &v){
        if(root == NULL) return;
        
        v.push_back(root->data);
        
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(v);
        }
        
        solve(root->left,v);
        solve(root->right,v);
        
        v.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int> v;
        solve(root,v);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna