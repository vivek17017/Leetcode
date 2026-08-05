class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
        return 0;
        int longest=0,current=1;
        string text="";
        text+=s[0];
        for(int i=1;i<s.length();i++)
        {

            if(!text.contains(s[i]))
            {
                current++;
                text+=s[i];
            }
            else
            {
                if(longest<current)
                longest=current;
                int index=text.find(s[i]);
                text.erase(0,index+1);
                text+=s[i];
                current=text.length();
                
            }
        }
        if(longest<current)
        longest=current;
        return longest;
    }
};