class Solution {
public:
    vector<string> getToken(string version){
        vector<string> v;
        stringstream ss(version);
        string s = "";

        while(getline(ss,s,'.')){
            v.push_back(s);
        }
        return v;
    }
    int compareVersion(string version1, string version2) {

        vector<string> v1 = getToken(version1);
        vector<string> v2 = getToken(version2);

        int n = v1.size();
        int m = v2.size();
        int i = 0;

        while(i < n || i < m){
            int a = i < n ? stoi(v1[i]) : 0;
            int b = i < m ? stoi(v2[i]) : 0;

            if(a < b) return -1;
            if(a > b) return 1;

            i++;
        }

        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna