class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        vector<int> ans;
        for(int n : nums2){
            if(set.contains(n)){
                ans.push_back(n);
                set.erase(n);
            }
        }
        return ans;
    }
};