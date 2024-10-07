class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 0;
        unordered_set<int> s(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            if(s.contains(x-1)) continue;
            while(s.count(x)){
                x++;
            }
            longest = max(longest, x - nums[i]);
        }
        return longest;
    }
};