class Solution {
public:
    void backtrack(vector<int> candidates, int target, int currSum, vector<int>& curr, vector<vector<int>>& ans){
        if(currSum == target){
            ans.push_back(curr);
        }
        if(currSum > target) return;

        for(int i=0;i<candidates.size();i++){
            if(curr.size() > 0 && candidates[i] < curr.back()) continue;
            curr.push_back(candidates[i]);
            currSum += candidates[i];
            backtrack(candidates, target, currSum, curr, ans);
            curr.pop_back();
            currSum -= candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(candidates, target, 0, curr, ans);
        return ans;
    }
};