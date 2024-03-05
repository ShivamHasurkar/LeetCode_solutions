class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;

        while(i<j){
            if(s[i] == s[j]){
                char c = s[i];
                while(s[i] == c && i<s.size()){
                    i++;
                }
                while(s[j] == c && j>0){
                    j--;
                }
            }
            else break;
        }
        if(j<i) return 0;
        return j-i+1;
    }
};