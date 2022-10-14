class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        if(intervals.size()==0)
        {
            return v;
        }
        int k=0;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if (!v.empty()) 
            {
                if (start <= v[k-1][1]) 
                {
                    continue;
                }
            }
            for(int j=i+1;j<intervals.size();j++)
            {
                if(end>=intervals[j][0])
                {
                    end=max(end,intervals[j][1]);
                }
                
            }
            
            end = max(end, intervals[i][1]);

                v.push_back({start, end});
                k++;
            }
        
        
        return v;
    }
};