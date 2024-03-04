class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> nextGreater;
        stack<int> st;

        for(int num : nums2){
            while(!st.empty() && st.top() < num){
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
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