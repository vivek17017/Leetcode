class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0)
        return false;
        stack<char>stack;
       unordered_map<char,char> dict = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        for(char a:s)
        {
            if(a=='(' || a=='{' || a=='[')
            {
                stack.push(dict[a]);
            }
            else
            {
                if(stack.empty())
                return false;
                if(stack.top()==a)
                {
                    stack.pop();
                }
                else
                return false;
            }
        }
        if(!stack.empty())
        return false;
        return true;
       
    }
};