class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r)
        {
            if(iswalnum(s[l])&&iswalnum(s[r]))
            {
                if(tolower(s[l])==tolower(s[r]))
                {
                    l++;
                    r--;
                }
                else
                return false;
            }
            else
            {
                if(!iswalnum(s[l]))
                l++;
                if(!iswalnum(s[r]))
                r--;
            }
        }
        return true;
    }
};