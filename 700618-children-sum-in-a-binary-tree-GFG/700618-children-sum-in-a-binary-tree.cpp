/* Structure of a Tree Node
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
}; */

class Solution {
  public:
    bool isSumProperty(Node *root) {
        // code here
        if(root == NULL) return true; 
        
        if(!root->left && !root->right){
            return true;
        }
        
        if(root->left && root->right){
            return (root->data == root->left->data + root->right->data) && (isSumProperty(root->left) && isSumProperty(root->right));
        }
        
        else if(!root->left && root->right){
            return (root->data == root->right->data) && isSumProperty(root->right);
        }
        
        else if(root->left && !root->right){
            return (root->data == root->left->data) && isSumProperty(root->left);
        }
        
        return (isSumProperty(root->left) && isSumProperty(root->right)) ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna