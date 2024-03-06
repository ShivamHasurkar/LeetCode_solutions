class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for(int c : t){
            if(c == s[j]) j++;
        }
        return s.size() == j;
    }
};