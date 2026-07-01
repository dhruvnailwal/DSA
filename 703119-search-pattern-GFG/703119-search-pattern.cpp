//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
        int n = pat.size();
        vector<int> lps(n,0);
        int len = 0;
        for(int i = 1;i < n;){
            if(pat[i] == pat[len]){
                lps[i++] = ++len;
            }
            else if(len){
                len = lps[len-1];
            }
            else{
                i++;
            }
        }
        vector<int> ans;
        int j = 0;
        int i = 0;
        while(i<txt.size()){
            if(txt[i] == pat[j]){
                i++;
                j++;
                if(j==n){
                    ans.push_back(i-j);
                    j = lps[j-1];
                }
            }
            else if(j){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna