class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> set(wordList.begin(), wordList.end());
        if(set.find(endWord) == set.end()){
            return 0;
        }

        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while(!q.empty()){
            string curr = q.front().first;
            int len = q.front().second;
            q.pop();

            if(curr == endWord){
                return len;
            }

            for(int i=0;i<curr.size();i++){
                string newWord = curr;
                for(char c = 'a'; c<='z';c++){
                    newWord[i] = c;
                    if(set.find(newWord) != set.end()){
                        q.push({newWord, len + 1});
                        set.erase(newWord);
                    }
                }
            }
        }
        return 0;
    }
};