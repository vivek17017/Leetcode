class Solution {
public:
    bool isAnagram(string s, string t) {
      /*  sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        */
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        for(int e:s)
        {
            m1[e]++;
        }
        for(int e:t)
        {
            m2[e]++;
        }
        
        return m1==m2;
    
    }
};