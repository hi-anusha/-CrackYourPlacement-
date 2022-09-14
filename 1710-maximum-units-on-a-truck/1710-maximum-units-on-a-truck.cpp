class Solution {
public:
    
    static bool comp(vector<int> a,vector<int> b)
    {
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        sort(boxTypes.begin(), boxTypes.end(),comp);
        
        for(int i=0;i<boxTypes.size();i++)
        {
            cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<"\n";
        }
        
        int n=0;
        int u=0;
        
        for(int i=0;i<boxTypes.size();i++)
        {
            if(n+boxTypes[i][0]<truckSize)
            {
                n=n+boxTypes[i][0];
                u=u+(boxTypes[i][1]*boxTypes[i][0]);
                
            }
            else
            {
                int remain=truckSize-n;
                u=u+(boxTypes[i][1]*remain);
                break;
            }
        }
        
        return u;
        
    }
};