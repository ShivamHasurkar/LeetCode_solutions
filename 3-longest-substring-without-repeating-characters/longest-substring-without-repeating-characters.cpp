class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> set;
        int max_len=0, j=0;
        for(int i=0;i<s.size();i++){
            while(set.count(s[i])){
                set.erase(s[j]);
                j++;
            }
            set.insert(s[i]);
            max_len = max(max_len, i-j+1);
        }
        return max_len;
    }
};