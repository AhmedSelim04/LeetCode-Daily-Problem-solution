class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            string x;
            x.push_back(details[i][11]);
            x.push_back(details[i][12]);
            ans+=(stoi(x)>60);
        }
        return ans;
    }
};