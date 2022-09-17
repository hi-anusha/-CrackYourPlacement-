class Solution {
public:
    bool checkValidString(string s) 
    {
        stack<char> o;
        stack<char> st;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                o.push(i);
            }
            else if(s[i]=='*')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                if(o.empty() && st.empty())
                    return false;
                else if(!o.empty())
                {
                    o.pop();
                }
                else if(o.empty() && !st.empty())
                {
                    if(i<st.top())
                        return false;
                    else
                        st.pop();
                }
            }
        }
        
        while(!o.empty())
        {
            if(st.empty())
            {
                return false;
                break;
            }
            if(o.top() > st.top())
            {
                return false;
                break;
            }
            else
            {
                st.pop();
                o.pop();
            }
            
        }
        
        return true;
        
    }
};