class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        vector<char>container;
        int res=0;
        for(int i=0;i<len;i++)
        {
            auto it=find(container.begin(),container.end(),s[i]);
            if(it==container.end())
            {
                container.push_back(s[i]);
                if(res<container.size())
                   res=container.size();
            }
            else
            {
                container.erase(container.begin(),it+1);
                container.push_back(s[i]);
            }
        }
        
        return res;
    }
};