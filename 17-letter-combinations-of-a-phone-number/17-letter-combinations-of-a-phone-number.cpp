class Solution {
public:
    
    map<char,vector<string>> mp;
    vector<string> ans;
    
    void f(int idx,string d,string cur)
    {
        if(idx==d.size())
        {
            ans.push_back(cur);
            return;
        }
        
        vector<string> v = mp[d[idx]];        
        for(int i=0;i<v.size();i++)
        {
            string s=v[i];
            cur=cur+s;
            f(idx+1,d,cur);
            cur.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits)
    {
        
        if(digits.size()==0)
            return ans;
        mp['2']={"a","b","c"};
        mp['3']={"d","e","f"};
        mp['4']={"g","h","i"};
        mp['5']={"j","k","l"};
        mp['6']={"m","n","o"};
        mp['7']={"p","q","r","s"};
        mp['8']={"t","u","v"};
        mp['9']={"w","x","y","z"};
        
        f(0,digits,"");
        return ans;
    }
};