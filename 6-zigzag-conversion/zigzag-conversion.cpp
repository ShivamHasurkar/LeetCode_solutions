class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> vec(numRows, "");
        int counter = 0;
        bool flag = true;
        for(char c : s){
            vec[counter] += c;
            if(flag){
                counter++;
            }
            else{
                counter--;
            }
            if(counter == numRows - 1 || counter == 0) flag = !flag;
        }
        string ans = "";
        for(string str : vec){
            ans += str;
        }
        return ans;
    }
};