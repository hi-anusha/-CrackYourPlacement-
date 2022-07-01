class Solution {
public:
    
    static bool cmp(const vector<int> &a,const vector<int> &b) 
    { 
	    return a[1]>b[1]; 
    } 
    
    int i;
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        sort(boxTypes.begin(), boxTypes.end(), cmp); 
        int mu=0;
        for(i=0;i<boxTypes.size() && truckSize>boxTypes[i][0];i++)
        {
            mu=mu+(boxTypes[i][0]*boxTypes[i][1]);
            truckSize=truckSize-boxTypes[i][0];
        }
        
        cout<<mu;
        cout<<i;
        
        int j=i;
        if(truckSize!=0)
        {
            while(j<boxTypes.size() && truckSize>0)
            {
                mu=mu+(boxTypes[j][1]);
            truckSize--;
            }
        }
                       
        return mu;
        
    }
};