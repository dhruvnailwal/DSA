class Solution {
public:
    vector<string> ans;

    bool isvalid(string &s){
        int count = 0;
        for(auto i : s){
            if(i == '(') count++;
            else count--;
            if(count < 0) return false;
        }

        return count == 0;
    }

    void solve(string &temp,int n){
        if(temp.size() == 2*n){
            if(isvalid(temp)) ans.push_back(temp);
            return;
        }

        temp.push_back('('); // DO
        solve(temp,n); //EXPLORE
        temp.pop_back(); //UNDO


        temp.push_back(')'); // DO
        solve(temp,n); //EXPLORE
        temp.pop_back(); //UNDO

    }

    vector<string> generateParenthesis(int n) {
        string temp = "";

        solve(temp,n);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna