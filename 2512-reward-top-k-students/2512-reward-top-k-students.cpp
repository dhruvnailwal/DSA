class Solution {
public:
    vector<string> convert(string s){
        vector<string> ans;
        string word = "";
        for(auto i : s){
            if(i == ' ' && word != ""){
                ans.push_back(word);
                word = "";
            }
            else{
                word += i;
            }
        }

        if(word != "") ans.push_back(word);

        return ans;
    }
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        map<string,int> pos;
        map<string,int> neg;

        for(auto i : positive_feedback){
            pos[i]++;
        }

        for(auto i : negative_feedback){
            neg[i]++;
        }

        auto cmp = [](const pair<int, int>& a,
                      const pair<int, int>& b) {
            if (a.first != b.first)
                return a.first > b.first;

            return a.second < b.second;
        };

        int n = report.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(cmp)> min_heap;

        for(int i = 0 ; i < n ; i++){

            vector<string> v = convert(report[i]);

            for(auto i : v){
                cout<<i<<" ";
            }

            cout<<endl;

            int a = 0;

            for(auto i : v){
                if(neg.count(i)){
                    a -=1;
                }
                else if(pos.count(i)){
                    a += 3;
                }
            }

            min_heap.push({a,student_id[i]});

            if(min_heap.size() > k){
                min_heap.pop();
            }
        }

        vector<int> ans;

        while(!min_heap.empty()){

            auto it = min_heap.top();
            min_heap.pop();

            ans.push_back(it.second);

        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna