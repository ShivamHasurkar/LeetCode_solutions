class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        unordered_set<int> ans;
        int l1 = nums1.size(), l2 = nums2.size(), i=0, j=0;
        while(i<l1 && j<l2){
            if(nums1[i] == nums2[j]){
                ans.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;
        }
        return vector<int>(ans.begin(), ans.end());
    }
};