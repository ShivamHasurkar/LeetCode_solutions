class Solution {
public:
    void backtrack(int n, int i, int j, string curr, vector<string>& ans){
        if(i==j && i==n){
            ans.push_back(curr);
            return;
        }
        if(i<n){
            curr += '(';
            backtrack(n, i+1, j, curr, ans);
            curr.pop_back();
        }
        if(j<i){
            curr += ')';
            backtrack(n, i, j+1, curr, ans);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        backtrack(n, 0, 0, curr, ans);
        return ans;
    }
};