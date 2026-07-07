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
    vector<int> ans;
    bool isleaf(Node* node){
        return node->left == NULL && node->right == NULL;
    }
    void leftt(Node* root){
        Node *temp = root->left;
        
        while(temp){
            if(!isleaf(temp)){
                ans.push_back(temp->data);
            }
            
            if(temp->left) temp = temp->left;
            else temp = temp->right;
        }
    }
    
    void rightt(Node* root){
        Node* temp = root->right;
        vector<int> v;
        while(temp){
            if(!isleaf(temp)){
                v.push_back(temp->data);
            }
            if(temp->right) temp = temp->right;
            else temp = temp->left;
        }
        
        for(int i = v.size()-1 ; i >= 0;i--){
            ans.push_back(v[i]);
        }
    }
    
    void leaf(Node* root){
        if(isleaf(root)){
            ans.push_back(root->data);
            return;
        }
        
        if(root->left) leaf(root->left);
        if(root->right) leaf(root->right);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root == NULL) return {};
        
        if(!isleaf(root)) ans.push_back(root->data);
        leftt(root);
        leaf(root);
        rightt(root);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna