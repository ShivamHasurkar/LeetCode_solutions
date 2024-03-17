class Solution {
public:
    void backtrack(string digits, string& curr, vector<string>& ans, vector<string> mapping, int idx){
        if(idx == digits.size()){
            ans.push_back(curr);
            return;
        }
        string str = mapping[digits[idx] - '0'];
        for(int j=0;j<str.size(); j++){
            curr += str[j];
            backtrack(digits, curr, ans, mapping, idx+1);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string> mapping = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        string curr = "";
        backtrack(digits, curr, ans, mapping, 0);
        return ans;
    }
};

