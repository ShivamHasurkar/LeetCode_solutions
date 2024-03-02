class Solution {
public:
    void backtrack(vector<int>& nums, set<vector<int>>& result, int idx){
        if(idx == nums.size()){
            result.insert(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i], nums[idx]);
            backtrack(nums, result, idx+1);
            swap(nums[idx], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> result;
        backtrack(nums, result, 0);
        return vector<vector<int>>(result.begin(), result.end());
    }
};