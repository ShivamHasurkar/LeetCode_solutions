class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int idx, int currSum, vector<int>& curr, vector<vector<int>>& ans){
        if(currSum == target) {
            ans.push_back(curr);
        }
        else if(currSum > target) return;

        for(int i=idx; i<candidates.size();i++){
            if(i>idx && candidates[i] == candidates[i-1]) continue;
            curr.push_back(candidates[i]);
            backtrack(candidates, target, i + 1, currSum + candidates[i], curr, ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, 0, 0, curr, ans);
        return ans;
    }
};