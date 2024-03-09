class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> nextGreater;
        stack<int> st;

        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[i] > st.top()){
                nextGreater[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

        for(int i=0;i<nums1.size();i++){
            if(nextGreater.find(nums1[i]) != nextGreater.end()){
                ans.push_back(nextGreater[nums1[i]]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};