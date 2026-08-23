class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string,int> mp;

        for(auto &str : emails){
            string temp = "";

            int n = str.size();
            bool flag = false;

            for(int i = 0 ; i < n ; i++){

                if(str[i] == '.' && !flag) continue;

                else if(str[i] == '+' && !flag){

                    while(i < n && str[i] != '@') i++;

                    flag = true;
                    temp += str[i];
                }

                else if(str[i] == '@'){
                    flag = true;
                    temp += str[i];
                }

                else temp += str[i];
            }

            mp[temp]++;
        }

        for(auto itt : mp){
            cout<<itt.first<<endl;
        }

        return mp.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna