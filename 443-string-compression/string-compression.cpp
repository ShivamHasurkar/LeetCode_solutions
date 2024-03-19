class Solution {
public:
    int compress(vector<char>& chars) {
        int read = 0, write = 0;
        while(read<chars.size()){
            char currChar = chars[read];
            int count =0;
            while(read < chars.size() && chars[read] == currChar){
                read++;
                count++;
            }
            chars[write++] = currChar;
            if(count > 1){
                for(char c : to_string(count)){
                    chars[write++] = c;
                }
            }
        }
        chars.resize(write);
        return write;
    }
};