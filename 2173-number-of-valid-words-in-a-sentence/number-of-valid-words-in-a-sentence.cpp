class Solution {
public:
    int validWord(string &word) 
    {
        int i=0;
        while(word[i]==' ') i++;
        if(i==word.size()) return 0;
        int digit=0, correcthyphen=0, incorrecthyphen=0, incorrectother=0;
        int n=word.size();
        for(int x=0; x<n; x++)
        {
            char ch=word[x];
            if(ch>='0' && ch<='9') digit=1;
            else if(ch=='-')
            {
                if(x>0 && x<n-1)
                {
                    if(word[x-1]>='a' && word[x-1]<='z' && word[x+1]>='a' && word[x+1]<='z')
                    {
                        correcthyphen++;
                    }
                    else incorrecthyphen++;
                }
                else incorrecthyphen++;
            }
            else if(!(ch>='a' && ch<='z') && x!=n-1) incorrectother++;
        }
        if(digit || correcthyphen>1 || incorrecthyphen || incorrectother) return 0;
        return 1;
    }
    int countValidWords(string sentence) 
    {
        sentence+=" ";
        int cnt=0;
        string word="";
        for(int x=0; x<sentence.size(); x++)
        {
            if(sentence[x]!=' ') word+=sentence[x];
            else 
            {
                cnt+=validWord(word);
                word="";
            }
        }
        return cnt;
    }
};