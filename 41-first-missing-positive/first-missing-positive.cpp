class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int i=1;
        while(set.contains(i)){
            i++;
        }
        return i;
    }
};