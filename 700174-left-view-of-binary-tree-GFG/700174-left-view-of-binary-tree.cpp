/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> ans;
    
    void preorder(Node* root, int level){
        if(root == NULL) return;
        
        if(level == ans.size()) ans.push_back(root->data);
        
        preorder(root->left,level+1);
        preorder(root->right,level+1);
    }
    vector<int> leftView(Node *root) {
        // code here
        preorder(root,0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna