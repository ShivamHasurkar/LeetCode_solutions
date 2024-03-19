class Solution {
public:
    string reverseWords(string s) {
        vector<string> result;
        stringstream ss(s);
        string token;
        while(ss>>token){result.push_back(token);}

        reverse(result.begin(), result.end());
        token = "";
        for(string str : result){
            token += str;
            token += " ";
        }
        token.pop_back();
        return token;
    }
};