class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> set(n);
        
        for(int i=0;i<n;i++){
            if(set.contains(nums[i]))
                return true;
            set.insert(nums[i]);
        }
        return false;
    }
};