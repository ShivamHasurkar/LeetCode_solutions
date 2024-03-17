class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int s = min(strs.front().size(), strs.back().size());
        string ans = "";
        for(int i=0;i<s;i++){
            if(strs.front()[i] != strs.back()[i]) return ans;

            ans += strs.front()[i];
        }
        return ans;
    }
};