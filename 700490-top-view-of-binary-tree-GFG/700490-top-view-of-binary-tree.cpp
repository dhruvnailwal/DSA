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
        vector<int> ans;
        
        queue<pair<Node*,int>> q;
        
        map<int,int> mp;
        
        q.push({root,0});
        
        while(!q.empty()){
            
            auto it = q.front();
            q.pop();
            
            Node* temp = it.first;
            int level = it.second;
            
            if(!mp.count(level)){
                mp[level] = temp->data;
            }
            
            if(temp->left){
                q.push({temp->left,level - 1});
            }
            
            if(temp->right){
                q.push({temp->right,level + 1});
            }
        }
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna