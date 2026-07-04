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
    vector<int> topView(Node *root) {
        // code here
        map<int,int> mp;
        queue<pair<Node*,int>> q;
        vector<int> ans;
        
        if(root == NULL) return ans;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            Node* temp = it.first;
            int line = it.second;
            
            if(!mp.count(line)){
                mp[line] = temp->data;
            }
            
            if(temp->left){
                q.push({temp->left,line-1});
            }
            if(temp->right){
                q.push({temp->right,line+1});
            }
        }
        
        for(auto i : mp){
            ans.push_back(i.second);
        }
        
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna