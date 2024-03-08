class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set(n);
        
        for(int i=0;i<n;i++){
            if(!set.insert(nums[i]).second) return true;
        }
        return false;
    }
};