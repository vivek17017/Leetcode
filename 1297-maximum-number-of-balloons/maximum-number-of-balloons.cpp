class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>m;
        for(int i=0;i<text.length();i++)
        {
            m[text[i]]++;
        }
        m['l']=m['l']/2;
        m['o']=m['o']/2;
        int min=m['b'];
        string s="alon";
        for(int i=0;i<s.length();i++)
        if(min>m[s[i]])
        {
            min=m[s[i]];
        }
        return min;
    }
};