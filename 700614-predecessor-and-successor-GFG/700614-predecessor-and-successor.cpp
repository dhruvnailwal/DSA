/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node* succ = NULL;
        Node* pred = NULL;
        Node * temp = root;
        
        while(temp){
            if(temp->data <= key){
                temp = temp->right;
            }
            else{
                succ = temp;
                temp = temp->left;
            }
        }
        
        temp = root;
        
        while(temp){
            if(temp->data >= key){
                temp = temp->left;
            }
            else{
                pred = temp;
                temp = temp->right;
            }
        }
        
        return {pred,succ};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna