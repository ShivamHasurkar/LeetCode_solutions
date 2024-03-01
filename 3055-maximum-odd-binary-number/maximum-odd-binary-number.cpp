class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string result = "";
        int count1 = 0;
        int count0 = 0;
        for(char c : s){
            if(c == '1') count1++;
            else count0++;
        }
        if(count1 > 1){
            while(count1 - 1 != 0){
                result += '1';
                count1--;
            }
        }
        while(count0){
            result += '0';
            count0--;
        }
        result += '1';
        return result;
    }
};