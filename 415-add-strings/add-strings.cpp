class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1, j = num2.size()-1;
        int carry = 0;
        string result = "";
        while(i>=0 || j>=0 || carry > 0){
            int sum = carry;
            if(i>=0){
                sum += num1[i] - '0';
                i--;
            }
            if(j>=0){
                sum += num2[j] - '0';
                j--;
            }
            carry = sum/10;
            result = char(sum%10 + '0') + result;
        }
        return result;
    }
};