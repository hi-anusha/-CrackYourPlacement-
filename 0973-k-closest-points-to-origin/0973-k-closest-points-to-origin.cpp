class Solution {
public:
static  bool comp(pair<int,int> a, pair<int,int> b)
{
    return (a.first*a.first + a.second*a.second < b.first*b.first + b.second*b.second);
}

    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> v;
    for(int i=0;i<points.size();i++)
    {
        v.push_back(make_pair(points[i][0],points[i][1]));
    }
    sort(v.begin(),v.end(),comp);

    
    vector<vector<int>> ans(k, vector<int> (2,0));
  
    for(int i=0;i<k;i++)
    {
        ans[i][0]=v[i].first;
        ans[i][1]=v[i].second;
    }
    return ans;
    }
};