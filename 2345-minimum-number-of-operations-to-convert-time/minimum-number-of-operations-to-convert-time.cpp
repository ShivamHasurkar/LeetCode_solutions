class Solution {
public:
    int convertTimeToMins(string time){
        int hours = stoi(time.substr(0,2));
        int mins = stoi(time.substr(3,2));
        return hours * 60 + mins;
    }
    int convertTime(string current, string correct) {
        vector<int> ops = {60,15,5,1};
        int curr = convertTimeToMins(current);
        int corr = convertTimeToMins(correct);
        int diff = corr - curr;
        int count =0;

        for(int m : ops){
            count += diff / m;
            diff %= m;
        }
        return count;
    }
};