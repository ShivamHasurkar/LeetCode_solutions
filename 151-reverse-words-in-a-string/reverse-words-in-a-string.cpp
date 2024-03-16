class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        stringstream ss(s);
        string token;
        while(ss>>token) {ans.push_back(token);}
        reverse(ans.begin(), ans.end());
        token = "";
        for(auto a : ans){
            token += a;
            token += " ";
        }
        token.pop_back();
        return token;
    }
};