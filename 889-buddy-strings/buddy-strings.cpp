class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        string newS = s, newG = goal;
        sort(newS.begin(), newS.end());
        sort(newG.begin(), newG.end());
        if(newS != newG) return false;
        int count = 0;

        if(s == goal){
            unordered_set<char> set;
            for(char c : s){
                if(!set.insert(c).second) return true;
            }
        }
        else{
            for(int i=0;i<s.size();i++){
                if(s[i] != goal[i]) count++;

                if(count > 2) return false;
            }
        }

        return count == 2;
    }
};