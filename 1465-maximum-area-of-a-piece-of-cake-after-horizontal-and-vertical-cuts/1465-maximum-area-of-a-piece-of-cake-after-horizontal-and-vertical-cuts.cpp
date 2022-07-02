class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        vector<int> ho;
        sort(horizontalCuts.begin(),horizontalCuts.end());
        ho.push_back(horizontalCuts[0]-0);
        for(int i=1;i<horizontalCuts.size();i++)
        {
            ho.push_back(horizontalCuts[i]-horizontalCuts[i-1]);
        }
        ho.push_back(h-horizontalCuts[horizontalCuts.size()-1]);
        
        int mh=*max_element(ho.begin(),ho.end());
        
        cout<<mh;
        
        vector<int> vo;
        sort(verticalCuts.begin(),verticalCuts.end());
        vo.push_back(verticalCuts[0]-0);
        for(int i=1;i<verticalCuts.size();i++)
        {
            vo.push_back(verticalCuts[i]-verticalCuts[i-1]);
        }
        vo.push_back(w-verticalCuts[verticalCuts.size()-1]);
        
        int mv=*max_element(vo.begin(),vo.end());
        
        return (long)mh * mv % 1000000007;
        
    }
};