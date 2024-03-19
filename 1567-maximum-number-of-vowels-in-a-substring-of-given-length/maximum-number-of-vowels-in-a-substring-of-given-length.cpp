class Solution {
public:
    bool isVowel(char c){
        string vowel = "aeiou";
        return (vowel.find(c) != string::npos);
    }
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        int maxCount = count;
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k])) count--;

            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};