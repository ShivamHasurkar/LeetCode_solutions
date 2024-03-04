class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]] = i;
        }
        for(int j=0;j<nums1.size();j++){
            int idx = m[nums1[j]];
            while(idx<nums2.size()){
                if(nums2[m[nums1[j]]] < nums2[idx]) break;
                idx++;
            }
            if(idx == nums2.size()) ans.push_back(-1);
            else ans.push_back(nums2[idx]);
        }
        return ans;
    }
};