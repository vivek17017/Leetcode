class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s!=t)
         return false;
       


        // for(int i=0;i<s.length();i++)
        // {
        //     int count=0;
        //     for(int j=0;j<t.length();j++)
        //     {
        //         if(s[i]==t[j])
        //             count++;
        //     }
        //     if(count==0)
        //         return false;
        // }
        return true;
    }
};