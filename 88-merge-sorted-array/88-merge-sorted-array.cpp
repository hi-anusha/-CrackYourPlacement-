class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> v(m+n,0);
        
        for(int i=0;i<m;i++)
        {
            v[i]=nums1[i];
        }
        
        int k=0;
        for(int j=m;j<m+n;j++)
        {
            v[j]=nums2[k];
            k++;
        }
        
        sort(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++)
        {
            nums1[i]=v[i];
        }
    }
};