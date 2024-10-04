class Solution {
public:
    void backtrack(vector<int>& candidates, int k, int n, int idx, int currSum, vector<int>& curr, vector<vector<int>>& ans){
        if(k == curr.size() && currSum == n){
            ans.push_back(curr);
            return;
        }
        if(k < curr.size() || currSum > n) return;

        for(int i=idx; i<candidates.size();i++){
            curr.push_back(candidates[i]);
            currSum += candidates[i];
            backtrack(candidates, k, n, i+1, currSum, curr, ans);
            curr.pop_back();
            currSum -= candidates[i];
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates{1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(candidates, k, n, 0, 0, curr, ans);
        return ans;
    }
};