class Solution {
public:
    void backtrack(vector<string>& candidates, string digits, int idx, string& curr, vector<string>& ans){
        if(digits.size() == idx){
            ans.push_back(curr);
            return;
        }
        string str = candidates[digits[idx] - '0'];
        for(int i=0;i<str.size();i++){
            curr += str[i];
            backtrack(candidates, digits, idx+1, curr, ans);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return {};
        vector<string> candidates = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
        vector<string> ans;
        string curr = "";
        backtrack(candidates, digits, 0, curr, ans);
        return ans;
    }
};