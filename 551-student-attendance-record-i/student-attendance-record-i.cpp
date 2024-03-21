class Solution {
public:
    bool checkRecord(string s) {
        int size =  s.size()-1;
        int countA = 0;

        for(int i=0;i<=size;i++){
            if(s[i] == 'A'){
                ++countA;
                if(countA >= 2){
                    return false;
                }
            }
            else if(s[i] == 'L'){
                if(i + 2 <= size){
                    if(s[i+1] == 'L' && s[i+2] == 'L'){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
// AA