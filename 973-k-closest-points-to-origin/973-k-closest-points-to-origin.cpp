class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        priority_queue<pair<int,vector<int>>> p;
        
        for(int i=0;i<points.size();i++)
        {
            int a=(points[i][0])*(points[i][0]);
            int b=(points[i][1])*(points[i][1]);
            
            int c=points[i][0];
            int d=points[i][1];
            
            vector<int> v;
            v.push_back(c);
            v.push_back(d);
            int s=a+b;
            
            p.push({s,v});
            
            if(p.size()>k)
            {
                p.pop();
            }
        }
        
        vector<vector<int>> ans;
        
         for(int i=0;i<k;i++)
            {
             
             
                ans.push_back(p.top().second);
                p.pop();
            }
        
        return ans;
    }
};