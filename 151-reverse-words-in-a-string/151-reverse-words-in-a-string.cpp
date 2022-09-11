class Solution {
public:
    string reverseWords(string s)
    {
        int i=0;
        int n=s.size();
        string sub="";
        stack<string> st;
        while(i<n)
        {
            while(s[i]==' ' && i<n)
            {
                i++;
            }
            while(i<n && s[i]!=' ')
            {
                sub=sub+s[i];
                i++;
            }
            st.push(sub);
            sub="";
        }
        sub="";
        while(!st.empty())
        {
           sub=sub+st.top();
            st.pop();
            sub=sub+" ";
        }
        
        int j=0;
        while(sub[j]==' ')
        {
            sub=sub.substr(j+1,sub.size()-1);
        }
        int k=sub.size()-1;
        while(sub[k]==' ')
            sub=sub.substr(0,sub.size()-1);
        return sub;
        
    }
};