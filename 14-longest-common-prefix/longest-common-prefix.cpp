class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = strs[0];

        for(string s : strs){
            int j =0;
            while(j<ans.size() && j<s.size() && ans[j] == s[j]){
                j++;
            }
            ans = ans.substr(0, j);
        }
        return ans;
    }
};