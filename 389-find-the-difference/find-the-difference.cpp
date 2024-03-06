class Solution {
public:
    char findTheDifference(string s, string t) {
        int x = 0;
        for(char c : s) x = x ^ c;

        for(char c: t) x = x ^ c;

        return x;
    }
};