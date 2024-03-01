class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count1 = 0;
        int count0 = 0;
        for(char c : s){
            if(c == '1') count1++;
            else count0++;
        }
        string result = string(count1 - 1, '1') + string(count0, '0') + '1';
        return result;
    }
};