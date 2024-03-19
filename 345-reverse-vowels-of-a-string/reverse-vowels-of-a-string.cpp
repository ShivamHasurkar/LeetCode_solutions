class Solution {
public:
    bool is_vowel(char c){
        string vowel = "aeiouAEIOU";
        return (vowel.find(c) != string::npos);
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(is_vowel(s[i])){
                if(is_vowel(s[j])){
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else j--;
            }
            else i++;
        }
        return s;
    }
};