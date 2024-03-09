class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> set(nums.begin(), nums.end());
        int i=1;
        while(set.contains(i)){
            i++;
        }
        return i;
    }
};