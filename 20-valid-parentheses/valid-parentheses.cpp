class Solution {
public:
    bool isValid(string str) {
        stack<char> st;
        for(char c : str){
            switch (c) {
                case '(':
                case '[':
                case '{':
                    st.push(c);
                    break;
                case ')':
                    if(!st.empty() && st.top() == '(') st.pop();
                    else return false;
                    break;
                case ']':
                    if(!st.empty() && st.top() == '[') st.pop();
                    else return false;
                    break;
                case '}':
                    if(!st.empty() && st.top() == '{') st.pop();
                    else return false;
                    break;
                default:
                    
            }
        }
        if(!st.empty()) return false;
        return true;
    }
};