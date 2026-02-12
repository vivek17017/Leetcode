class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>str;
        set<char>num={0,1,2,3,4,5,6,7,8,9};
        for(auto x:s)
        {
            if(iswalnum(x))
            {
                if(x>=65&&x<=90)
                str.push_back(x+32);
                else
                str.push_back(x);
            }
            
            
        }
        vector<char>str1(str.rbegin(),str.rend());
        if(str==str1)
        return true;
        else
        return false;
    }
};